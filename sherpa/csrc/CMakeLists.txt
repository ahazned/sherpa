# Please sort the filenames alphabetically
set(sherpa_srcs
  rnnt_beam_search.cc
  rnnt_emformer_model.cc
  rnnt_model.cc
)

add_library(sherpa_core ${sherpa_srcs})
target_link_libraries(sherpa_core PUBLIC ${TORCH_LIBRARIES})

target_compile_definitions(sherpa_core PUBLIC SHERPA_TORCH_VERSION_MAJOR=${SHERPA_TORCH_VERSION_MAJOR})
target_compile_definitions(sherpa_core PUBLIC SHERPA_TORCH_VERSION_MINOR=${SHERPA_TORCH_VERSION_MINOR})

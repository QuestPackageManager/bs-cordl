#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMediaAsyncLoader)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMediaAsyncLoader);
// Type: ::IMediaAsyncLoader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5894))
// CS Name: ::IMediaAsyncLoader*
class CORDL_TYPE IMediaAsyncLoader {
public:
  // Declarations
  /// @brief Method LoadAudioClipFromFilePathAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadAudioClipFromFilePathAsync(::StringW filePath);

  // Ctor Parameters [CppParam { name: "", ty: "IMediaAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMediaAsyncLoader(IMediaAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMediaAsyncLoader(IMediaAsyncLoader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMediaAsyncLoader*, "", "IMediaAsyncLoader");

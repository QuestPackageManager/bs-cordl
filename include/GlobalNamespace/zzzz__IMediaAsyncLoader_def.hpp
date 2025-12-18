#pragma once
// IWYU pragma private; include "GlobalNamespace/IMediaAsyncLoader.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMediaAsyncLoader
class CORDL_TYPE IMediaAsyncLoader {
public:
  // Declarations
  /// @brief Method LoadAudioClipFromFilePathAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadAudioClipFromFilePathAsync(::StringW filePath);

  // Ctor Parameters [CppParam { name: "", ty: "IMediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMediaAsyncLoader(IMediaAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMediaAsyncLoader*, "", "IMediaAsyncLoader");

#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReferenceCountingCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReferenceCountingCache)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioReferenceCountingCache;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioReferenceCountingCache);
// Dependencies ReferenceCountingCache`2<TKey, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioReferenceCountingCache
class CORDL_TYPE AudioReferenceCountingCache : public ::GlobalNamespace::ReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*> {
public:
  // Declarations
  static inline ::GlobalNamespace::AudioReferenceCountingCache* New_ctor();

  /// @brief Method .ctor, addr 0x3c21b28, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioReferenceCountingCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioReferenceCountingCache(AudioReferenceCountingCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioReferenceCountingCache(AudioReferenceCountingCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioReferenceCountingCache, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioReferenceCountingCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioReferenceCountingCache*, "", "AudioReferenceCountingCache");

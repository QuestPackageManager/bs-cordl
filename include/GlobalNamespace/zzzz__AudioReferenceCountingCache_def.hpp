#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReferenceCountingCache)
// Forward declare root types
namespace GlobalNamespace {
class AudioReferenceCountingCache;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioReferenceCountingCache);
// Type: ::AudioReferenceCountingCache
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6003), inst: 3734 }), TypeDefinitionIndex(TypeDefinitionIndex(2769)),
// TypeDefinitionIndex(TypeDefinitionIndex(6003)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2769), inst: 280 }), TypeDefinitionIndex(TypeDefinitionIndex(15614))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(5979)) CS Name: ::AudioReferenceCountingCache*
class CORDL_TYPE AudioReferenceCountingCache : public ::GlobalNamespace::ReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*> {
public:
  // Declarations
  static inline ::GlobalNamespace::AudioReferenceCountingCache* New_ctor();

  /// @brief Method .ctor addr 0x21b3650 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioReferenceCountingCache(AudioReferenceCountingCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioReferenceCountingCache(AudioReferenceCountingCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioReferenceCountingCache();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioReferenceCountingCache, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioReferenceCountingCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioReferenceCountingCache*, "", "AudioReferenceCountingCache");

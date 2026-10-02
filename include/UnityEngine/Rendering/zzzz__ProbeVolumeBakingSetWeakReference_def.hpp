#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSetWeakReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSetWeakReference)
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSetWeakReference;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference*, "UnityEngine.Rendering", "ProbeVolumeBakingSetWeakReference");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSetWeakReference
class CORDL_TYPE ProbeVolumeBakingSetWeakReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_InstanceID, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InstanceID, put = __cordl_internal_set_m_InstanceID)) int32_t m_InstanceID;

  /// @brief Method Get, addr 0x6bb135c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> Get();

  /// @brief Method IsLoaded, addr 0x6bb13c0, size 0x48, virtual false, abstract: false, final false
  inline bool IsLoaded();

  static inline ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference* New_ctor();

  static inline ::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference* New_ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

  /// @brief Method Set, addr 0x6bb12c0, size 0x94, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

  /// @brief Method Unload, addr 0x6bb1408, size 0x64, virtual false, abstract: false, final false
  inline void Unload();

  constexpr int32_t const& __cordl_internal_get_m_InstanceID() const;

  constexpr int32_t& __cordl_internal_get_m_InstanceID();

  constexpr void __cordl_internal_set_m_InstanceID(int32_t value);

  /// @brief Method .ctor, addr 0x6bb1354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6bb12bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingSetWeakReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSetWeakReference", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeBakingSetWeakReference(ProbeVolumeBakingSetWeakReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingSetWeakReference", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeBakingSetWeakReference(ProbeVolumeBakingSetWeakReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9010 };

  /// @brief Field m_InstanceID, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_InstanceID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference, ___m_InstanceID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ProbeVolumeBakingSetWeakReference) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering

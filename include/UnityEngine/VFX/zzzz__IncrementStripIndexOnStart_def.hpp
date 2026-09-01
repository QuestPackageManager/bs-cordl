#pragma once
// IWYU pragma private; include "UnityEngine\VFX\IncrementStripIndexOnStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementStripIndexOnStart)
namespace UnityEngine::VFX {
class IncrementStripIndexOnStart_InputProperties;
}
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class IncrementStripIndexOnStart;
}
namespace UnityEngine::VFX {
class IncrementStripIndexOnStart_InputProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::IncrementStripIndexOnStart*);
MARK_REF_T(::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::IncrementStripIndexOnStart*, "UnityEngine.VFX", "IncrementStripIndexOnStart");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties*, "UnityEngine.VFX", "IncrementStripIndexOnStart/InputProperties");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.IncrementStripIndexOnStart/InputProperties
class CORDL_TYPE IncrementStripIndexOnStart_InputProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field StripMaxCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_StripMaxCount, put = __cordl_internal_set_StripMaxCount)) uint32_t StripMaxCount;

  static inline ::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties* New_ctor();

  constexpr uint32_t const& __cordl_internal_get_StripMaxCount() const;

  constexpr uint32_t& __cordl_internal_get_StripMaxCount();

  constexpr void __cordl_internal_set_StripMaxCount(uint32_t value);

  /// @brief Method .ctor, addr 0x69d18e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementStripIndexOnStart_InputProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementStripIndexOnStart_InputProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementStripIndexOnStart_InputProperties(IncrementStripIndexOnStart_InputProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementStripIndexOnStart_InputProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementStripIndexOnStart_InputProperties(IncrementStripIndexOnStart_InputProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19921 };

  /// @brief Field StripMaxCount, offset: 0x10, size: 0x4, def value: None
  uint32_t ___StripMaxCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties, ___StripMaxCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.VFXSpawnerCallbacks
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.IncrementStripIndexOnStart
class CORDL_TYPE IncrementStripIndexOnStart : public ::UnityEngine::VFX::VFXSpawnerCallbacks {
public:
  // Declarations
  using InputProperties = ::UnityEngine::VFX::IncrementStripIndexOnStart_InputProperties;

  /// @brief Field m_Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) uint32_t m_Index;

  /// @brief Field stripIndexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_stripIndexID, put = setStaticF_stripIndexID)) int32_t stripIndexID;

  /// @brief Field stripMaxCountID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_stripMaxCountID, put = setStaticF_stripMaxCountID)) int32_t stripMaxCountID;

  static inline ::UnityEngine::VFX::IncrementStripIndexOnStart* New_ctor();

  /// @brief Method OnPlay, addr 0x69d1720, size 0x108, virtual true, abstract: false, final false
  inline void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnStop, addr 0x69d1828, size 0x8, virtual true, abstract: false, final false
  inline void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnUpdate, addr 0x69d1830, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  constexpr uint32_t const& __cordl_internal_get_m_Index() const;

  constexpr uint32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_Index(uint32_t value);

  /// @brief Method .ctor, addr 0x69d1834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_stripIndexID();

  static inline int32_t getStaticF_stripMaxCountID();

  static inline void setStaticF_stripIndexID(int32_t value);

  static inline void setStaticF_stripMaxCountID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementStripIndexOnStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementStripIndexOnStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementStripIndexOnStart(IncrementStripIndexOnStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementStripIndexOnStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementStripIndexOnStart(IncrementStripIndexOnStart const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19922 };

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::IncrementStripIndexOnStart, ___m_Index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::IncrementStripIndexOnStart) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX

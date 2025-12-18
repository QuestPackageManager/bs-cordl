#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsPanel_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsPanel_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettingsPanel_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsPanel_1);
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
class CORDL_TYPE DebugDisplaySettingsPanel_1 : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_data, put = set_data)) T data;

  /// @brief Field m_Data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) T m_Data;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>* New_ctor(T data);

  constexpr T const& __cordl_internal_get_m_Data() const;

  constexpr T& __cordl_internal_get_m_Data();

  constexpr void __cordl_internal_set_m_Data(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T data);

  /// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_data();

  /// @brief Method set_data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_data(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsPanel_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsPanel_1(DebugDisplaySettingsPanel_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsPanel_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsPanel_1(DebugDisplaySettingsPanel_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11927 };

  /// @brief Field m_Data, offset: 0x20, size: 0x8, def value: None
  T ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsPanel_1, "UnityEngine.Rendering", "DebugDisplaySettingsPanel`1");

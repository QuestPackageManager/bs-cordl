#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/ExposedProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExposedProperty)
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::ExposedProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::ExposedProperty*, "UnityEngine.VFX.Utility", "ExposedProperty");
// Dependencies System.Object
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.ExposedProperty
class CORDL_TYPE ExposedProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Id, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) int32_t m_Id;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  static inline ::UnityEngine::VFX::Utility::ExposedProperty* New_ctor();

  static inline ::UnityEngine::VFX::Utility::ExposedProperty* New_ctor(::StringW name);

  /// @brief Method ToString, addr 0x69dcac8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_m_Id() const;

  constexpr int32_t& __cordl_internal_get_m_Id();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr void __cordl_internal_set_m_Id(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  /// @brief Method .ctor, addr 0x69dcabc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x69dca10, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method op_Addition, addr 0x69dca34, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::Utility::ExposedProperty* op_Addition(::UnityEngine::VFX::Utility::ExposedProperty* self, ::UnityEngine::VFX::Utility::ExposedProperty* other);

  /// @brief Method op_Explicit, addr 0x69dca20, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW op_Explicit___StringW(::UnityEngine::VFX::Utility::ExposedProperty* parameter);

  /// @brief Method op_Implicit, addr 0x69cbc94, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::Utility::ExposedProperty* op_Implicit___UnityEngine__VFX__Utility__ExposedProperty_(::StringW name);

  /// @brief Method op_Implicit, addr 0x69d1ba4, size 0x98, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::VFX::Utility::ExposedProperty* parameter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExposedProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExposedProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExposedProperty(ExposedProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExposedProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExposedProperty(ExposedProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19951 };

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Id, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::ExposedProperty, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::ExposedProperty, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::ExposedProperty) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility

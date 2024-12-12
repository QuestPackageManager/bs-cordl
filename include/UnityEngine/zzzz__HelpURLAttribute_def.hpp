#pragma once
// IWYU pragma private; include "UnityEngine/HelpURLAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpURLAttribute)
// Forward declare root types
namespace UnityEngine {
class HelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HelpURLAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HelpURLAttribute
class CORDL_TYPE HelpURLAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_Dispatcher, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dispatcher, put = __cordl_internal_set_m_Dispatcher)) bool m_Dispatcher;

  /// @brief Field m_DispatchingFieldName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DispatchingFieldName, put = __cordl_internal_set_m_DispatchingFieldName)) ::StringW m_DispatchingFieldName;

  /// @brief Field m_Url, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Url, put = __cordl_internal_set_m_Url)) ::StringW m_Url;

  static inline ::UnityEngine::HelpURLAttribute* New_ctor(::StringW url);

  constexpr bool const& __cordl_internal_get_m_Dispatcher() const;

  constexpr bool& __cordl_internal_get_m_Dispatcher();

  constexpr ::StringW const& __cordl_internal_get_m_DispatchingFieldName() const;

  constexpr ::StringW& __cordl_internal_get_m_DispatchingFieldName();

  constexpr ::StringW const& __cordl_internal_get_m_Url() const;

  constexpr ::StringW& __cordl_internal_get_m_Url();

  constexpr void __cordl_internal_set_m_Dispatcher(bool value);

  constexpr void __cordl_internal_set_m_DispatchingFieldName(::StringW value);

  constexpr void __cordl_internal_set_m_Url(::StringW value);

  /// @brief Method .ctor, addr 0x48a64d0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW url);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpURLAttribute(HelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpURLAttribute(HelpURLAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10863 };

  /// @brief Field m_Url, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Url;

  /// @brief Field m_Dispatcher, offset: 0x18, size: 0x1, def value: None
  bool ___m_Dispatcher;

  /// @brief Field m_DispatchingFieldName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_DispatchingFieldName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HelpURLAttribute, ___m_Url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HelpURLAttribute, ___m_Dispatcher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HelpURLAttribute, ___m_DispatchingFieldName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HelpURLAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HelpURLAttribute*, "UnityEngine", "HelpURLAttribute");

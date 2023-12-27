#pragma once
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
// Type: UnityEngine::HelpURLAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10221))
// CS Name: ::UnityEngine::HelpURLAttribute*
class CORDL_TYPE HelpURLAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_Url, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Url, put = __set_m_Url))::StringW m_Url;

  /// @brief Field m_Dispatcher, offset 0x18, size 0x1
  __declspec(property(get = __get_m_Dispatcher, put = __set_m_Dispatcher)) bool m_Dispatcher;

  /// @brief Field m_DispatchingFieldName, offset 0x20, size 0x8
  __declspec(property(get = __get_m_DispatchingFieldName, put = __set_m_DispatchingFieldName))::StringW m_DispatchingFieldName;

  constexpr ::StringW& __get_m_Url();

  constexpr ::StringW const& __get_m_Url() const;

  constexpr void __set_m_Url(::StringW value);

  constexpr bool& __get_m_Dispatcher();

  constexpr bool const& __get_m_Dispatcher() const;

  constexpr void __set_m_Dispatcher(bool value);

  constexpr ::StringW& __get_m_DispatchingFieldName();

  constexpr ::StringW const& __get_m_DispatchingFieldName() const;

  constexpr void __set_m_DispatchingFieldName(::StringW value);

  static inline ::UnityEngine::HelpURLAttribute* New_ctor(::StringW url);

  /// @brief Method .ctor addr 0x2cd2900 size 0x68 virtual false final false
  inline void _ctor(::StringW url);

  // Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpURLAttribute(HelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpURLAttribute(HelpURLAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpURLAttribute();

public:
  /// @brief Field m_Url, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Url;

  /// @brief Field m_Dispatcher, offset: 0x18, size: 0x1, def value: None
  bool ___m_Dispatcher;

  /// @brief Field m_DispatchingFieldName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_DispatchingFieldName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HelpURLAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HelpURLAttribute*, "UnityEngine", "HelpURLAttribute");

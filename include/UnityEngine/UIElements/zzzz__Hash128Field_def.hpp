#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Hash128Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hash128Field)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class UxmlHash128AttributeDescription;
}
namespace UnityEngine::UIElements {
class __Hash128Field__Hash128Input;
}
namespace UnityEngine::UIElements {
class __Hash128Field__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Hash128Field__UxmlTraits;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Hash128Field;
}
namespace UnityEngine::UIElements {
class __Hash128Field__Hash128Input;
}
namespace UnityEngine::UIElements {
class __Hash128Field__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Hash128Field__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Hash128Field);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Hash128Field__Hash128Input);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Hash128Field__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Hash128Field__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Hash128Field::UxmlFactory*
class CORDL_TYPE __Hash128Field__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Hash128Field*, ::UnityEngine::UIElements::__Hash128Field__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Hash128Field__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4932e4c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hash128Field__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hash128Field__UxmlFactory(__Hash128Field__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hash128Field__UxmlFactory(__Hash128Field__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Hash128Field__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Hash128Field::UxmlTraits*
class CORDL_TYPE __Hash128Field__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<::UnityEngine::Hash128, ::UnityEngine::UIElements::UxmlHash128AttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Hash128Field__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4932e94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hash128Field__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hash128Field__UxmlTraits(__Hash128Field__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hash128Field__UxmlTraits(__Hash128Field__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Hash128Field__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::Hash128Input
// SizeInfo { instance_size: 1024, native_size: -1, calculated_instance_size: 1024, calculated_native_size: 1020, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Hash128Field::Hash128Input*
class CORDL_TYPE __Hash128Field__Hash128Input : public ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<::UnityEngine::Hash128> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  /// @brief Method AcceptCharacter, addr 0x4932f1c, size 0xb8, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  static inline ::UnityEngine::UIElements::__Hash128Field__Hash128Input* New_ctor();

  /// @brief Method Parse, addr 0x4932b1c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Parse(::StringW str);

  /// @brief Method StringToValue, addr 0x4932fd4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 StringToValue(::StringW str);

  /// @brief Method .ctor, addr 0x4932644, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4932edc, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_allowedCharacters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hash128Field__Hash128Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__Hash128Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hash128Field__Hash128Input(__Hash128Field__Hash128Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hash128Field__Hash128Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hash128Field__Hash128Input(__Hash128Field__Hash128Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5564 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Hash128Field__Hash128Input, 0x400>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Hash128Field
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1121, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Hash128Field*
class CORDL_TYPE Hash128Field : public ::UnityEngine::UIElements::TextInputBaseField_1<::UnityEngine::Hash128> {
public:
  // Declarations
  using Hash128Input = ::UnityEngine::UIElements::__Hash128Field__Hash128Input;

  using UxmlFactory = ::UnityEngine::UIElements::__Hash128Field__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Hash128Field__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_UpdateTextFromValue, offset 0x460, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateTextFromValue, put = __cordl_internal_set_m_UpdateTextFromValue)) bool m_UpdateTextFromValue;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Hash128 value;

  /// @brief Method ExecuteDefaultAction, addr 0x4932b8c, size 0x1f0, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::Hash128Field* New_ctor();

  static inline ::UnityEngine::UIElements::Hash128Field* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method SetValueWithoutNotify, addr 0x4932a28, size 0xc8, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::Hash128 newValue);

  /// @brief Method StringToValue, addr 0x4932b14, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 StringToValue(::StringW str);

  /// @brief Method UpdateTextFromValue, addr 0x4932990, size 0x98, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x49328a4, size 0xec, virtual true, abstract: false, final false
  inline void UpdateValueFromText();

  /// @brief Method ValueToString, addr 0x4932af0, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ValueToString(::UnityEngine::Hash128 value);

  constexpr bool const& __cordl_internal_get_m_UpdateTextFromValue() const;

  constexpr bool& __cordl_internal_get_m_UpdateTextFromValue();

  constexpr void __cordl_internal_set_m_UpdateTextFromValue(bool value);

  /// @brief Method .ctor, addr 0x49324bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49324c8, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_value, addr 0x4932794, size 0x48, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 get_value();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_value, addr 0x49327dc, size 0xc8, virtual true, abstract: false, final false
  inline void set_value(::UnityEngine::Hash128 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hash128Field(Hash128Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hash128Field(Hash128Field const&) = delete;

  /// @brief Field m_UpdateTextFromValue, offset: 0x460, size: 0x1, def value: None
  bool ___m_UpdateTextFromValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hash128Field, 0x468>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Hash128Field, ___m_UpdateTextFromValue) == 0x460, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field*, "UnityEngine.UIElements", "Hash128Field");
NEED_NO_BOX(::UnityEngine::UIElements::__Hash128Field__Hash128Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Hash128Field__Hash128Input*, "UnityEngine.UIElements", "Hash128Field/Hash128Input");
NEED_NO_BOX(::UnityEngine::UIElements::__Hash128Field__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Hash128Field__UxmlFactory*, "UnityEngine.UIElements", "Hash128Field/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Hash128Field__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Hash128Field__UxmlTraits*, "UnityEngine.UIElements", "Hash128Field/UxmlTraits");

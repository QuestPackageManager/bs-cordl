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
class Hash128Field_Hash128Input;
}
namespace UnityEngine::UIElements {
class Hash128Field_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Hash128Field_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlHash128AttributeDescription;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Hash128Field;
}
namespace UnityEngine::UIElements {
class Hash128Field_Hash128Input;
}
namespace UnityEngine::UIElements {
class Hash128Field_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Hash128Field_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Hash128Field);
MARK_REF_PTR_T(::UnityEngine::UIElements::Hash128Field_Hash128Input);
MARK_REF_PTR_T(::UnityEngine::UIElements::Hash128Field_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Hash128Field_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Hash128Field/UxmlFactory
class CORDL_TYPE Hash128Field_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Hash128Field*, ::UnityEngine::UIElements::Hash128Field_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Hash128Field_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b129a0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128Field_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hash128Field_UxmlFactory(Hash128Field_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hash128Field_UxmlFactory(Hash128Field_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hash128Field_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Hash128, UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Hash128Field/UxmlTraits
class CORDL_TYPE Hash128Field_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<::UnityEngine::Hash128, ::UnityEngine::UIElements::UxmlHash128AttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Hash128Field_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x6b12a08, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128Field_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hash128Field_UxmlTraits(Hash128Field_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hash128Field_UxmlTraits(Hash128Field_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hash128Field_UxmlTraits, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Hash128, UnityEngine.UIElements.TextInputBaseField`1::TextInputBase<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Hash128Field/Hash128Input
class CORDL_TYPE Hash128Field_Hash128Input : public ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<::UnityEngine::Hash128> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  /// @brief Method AcceptCharacter, addr 0x6b12a98, size 0xc8, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  static inline ::UnityEngine::UIElements::Hash128Field_Hash128Input* New_ctor();

  /// @brief Method Parse, addr 0x6b126a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Parse(::StringW str);

  /// @brief Method StringToValue, addr 0x6b12b60, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 StringToValue(::StringW str);

  /// @brief Method .ctor, addr 0x6b121d0, size 0x184, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x6b12a54, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_allowedCharacters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128Field_Hash128Input();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_Hash128Input", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hash128Field_Hash128Input(Hash128Field_Hash128Input&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hash128Field_Hash128Input", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hash128Field_Hash128Input(Hash128Field_Hash128Input const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hash128Field_Hash128Input, 0x4e0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Hash128, UnityEngine.UIElements.TextInputBaseField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Hash128Field
class CORDL_TYPE Hash128Field : public ::UnityEngine::UIElements::TextInputBaseField_1<::UnityEngine::Hash128> {
public:
  // Declarations
  using Hash128Input = ::UnityEngine::UIElements::Hash128Field_Hash128Input;

  using UxmlFactory = ::UnityEngine::UIElements::Hash128Field_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Hash128Field_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_UpdateTextFromValue, offset 0x538, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateTextFromValue, put = __cordl_internal_set_m_UpdateTextFromValue)) bool m_UpdateTextFromValue;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Hash128 value;

  /// @brief Method HandleEventBubbleUp, addr 0x6b12704, size 0x1c0, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::Hash128Field* New_ctor();

  static inline ::UnityEngine::UIElements::Hash128Field* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method SetValueWithoutNotify, addr 0x6b125d0, size 0xc4, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::Hash128 newValue);

  /// @brief Method StringToValue, addr 0x6b126a0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 StringToValue(::StringW str);

  /// @brief Method UpdateTextFromValue, addr 0x6b12550, size 0x80, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x6b12460, size 0xf0, virtual true, abstract: false, final false
  inline void UpdateValueFromText();

  /// @brief Method ValueToString, addr 0x6b12694, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ValueToString(::UnityEngine::Hash128 value);

  constexpr bool const& __cordl_internal_get_m_UpdateTextFromValue() const;

  constexpr bool& __cordl_internal_get_m_UpdateTextFromValue();

  constexpr void __cordl_internal_set_m_UpdateTextFromValue(bool value);

  /// @brief Method .ctor, addr 0x6b12040, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b1204c, size 0x184, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_value, addr 0x6b12354, size 0x48, virtual true, abstract: false, final false
  inline ::UnityEngine::Hash128 get_value();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_value, addr 0x6b1239c, size 0xc4, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4207 };

  /// @brief Field m_UpdateTextFromValue, offset: 0x538, size: 0x1, def value: None
  bool ___m_UpdateTextFromValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Hash128Field, ___m_UpdateTextFromValue) == 0x538, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Hash128Field, 0x540>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field*, "UnityEngine.UIElements", "Hash128Field");
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field_Hash128Input);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field_Hash128Input*, "UnityEngine.UIElements", "Hash128Field/Hash128Input");
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field_UxmlFactory*, "UnityEngine.UIElements", "Hash128Field/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Hash128Field_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Hash128Field_UxmlTraits*, "UnityEngine.UIElements", "Hash128Field/UxmlTraits");

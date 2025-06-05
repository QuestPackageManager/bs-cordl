#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IntegerField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class IntegerField_IntegerInput;
}
namespace UnityEngine::UIElements {
class IntegerField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class IntegerField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IntegerField;
}
namespace UnityEngine::UIElements {
class IntegerField_IntegerInput;
}
namespace UnityEngine::UIElements {
class IntegerField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class IntegerField_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IntegerField);
MARK_REF_PTR_T(::UnityEngine::UIElements::IntegerField_IntegerInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::IntegerField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::IntegerField_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IntegerField/UxmlFactory
class CORDL_TYPE IntegerField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IntegerField*, ::UnityEngine::UIElements::IntegerField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::IntegerField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49f27c0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerField_UxmlFactory(IntegerField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerField_UxmlFactory(IntegerField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IntegerField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IntegerField/UxmlTraits
class CORDL_TYPE IntegerField_UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::IntegerField_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49f2808, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerField_UxmlTraits(IntegerField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerField_UxmlTraits(IntegerField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IntegerField_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1::TextValueInput<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IntegerField/IntegerInput
class CORDL_TYPE IntegerField_IntegerInput : public ::UnityEngine::UIElements::TextValueField_1_TextValueInput<int32_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentIntegerField)) ::UnityEngine::UIElements::IntegerField* parentIntegerField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49f2928, size 0x250, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue);

  static inline ::UnityEngine::UIElements::IntegerField_IntegerInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49f2bc4, size 0xa8, virtual true, abstract: false, final false
  inline int32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49f2b78, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int32_t v);

  /// @brief Method .ctor, addr 0x49f25d4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x49f28d0, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentIntegerField, addr 0x49f2850, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IntegerField* get_parentIntegerField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerField_IntegerInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_IntegerInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerField_IntegerInput(IntegerField_IntegerInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerField_IntegerInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerField_IntegerInput(IntegerField_IntegerInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IntegerField_IntegerInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextValueField`1<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IntegerField
class CORDL_TYPE IntegerField : public ::UnityEngine::UIElements::TextValueField_1<int32_t> {
public:
  // Declarations
  using IntegerInput = ::UnityEngine::UIElements::IntegerField_IntegerInput;

  using UxmlFactory = ::UnityEngine::UIElements::IntegerField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::IntegerField_UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_integerInput)) ::UnityEngine::UIElements::IntegerField_IntegerInput* integerInput;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49f268c, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue);

  /// @brief Method CanTryParse, addr 0x49f2668, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::IntegerField* New_ctor();

  static inline ::UnityEngine::UIElements::IntegerField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49f239c, size 0xdc, virtual true, abstract: false, final false
  inline int32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49f22e4, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int32_t v);

  /// @brief Method .ctor, addr 0x49f2478, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49f2484, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_integerInput, addr 0x49f2260, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IntegerField_IntegerInput* get_integerInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerField(IntegerField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerField(IntegerField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5622 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IntegerField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IntegerField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IntegerField*, "UnityEngine.UIElements", "IntegerField");
NEED_NO_BOX(::UnityEngine::UIElements::IntegerField_IntegerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IntegerField_IntegerInput*, "UnityEngine.UIElements", "IntegerField/IntegerInput");
NEED_NO_BOX(::UnityEngine::UIElements::IntegerField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IntegerField_UxmlFactory*, "UnityEngine.UIElements", "IntegerField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::IntegerField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IntegerField_UxmlTraits*, "UnityEngine.UIElements", "IntegerField/UxmlTraits");

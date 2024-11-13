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
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class __IntegerField__IntegerInput;
}
namespace UnityEngine::UIElements {
class __IntegerField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __IntegerField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IntegerField;
}
namespace UnityEngine::UIElements {
class __IntegerField__IntegerInput;
}
namespace UnityEngine::UIElements {
class __IntegerField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __IntegerField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IntegerField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IntegerField__IntegerInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IntegerField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__IntegerField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::IntegerField::UxmlFactory*
class CORDL_TYPE __IntegerField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::IntegerField*, ::UnityEngine::UIElements::__IntegerField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__IntegerField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x498b3fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntegerField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntegerField__UxmlFactory(__IntegerField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntegerField__UxmlFactory(__IntegerField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IntegerField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::IntegerField::UxmlTraits*
class CORDL_TYPE __IntegerField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<int32_t, ::UnityEngine::UIElements::UxmlIntAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__IntegerField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x498b444, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntegerField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntegerField__UxmlTraits(__IntegerField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntegerField__UxmlTraits(__IntegerField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IntegerField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::IntegerInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::IntegerField::IntegerInput*
class CORDL_TYPE __IntegerField__IntegerInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<int32_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentIntegerField)) ::UnityEngine::UIElements::IntegerField* parentIntegerField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x498b564, size 0x250, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue);

  static inline ::UnityEngine::UIElements::__IntegerField__IntegerInput* New_ctor();

  /// @brief Method StringToValue, addr 0x498b800, size 0xa8, virtual true, abstract: false, final false
  inline int32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x498b7b4, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int32_t v);

  /// @brief Method .ctor, addr 0x498b210, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x498b50c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentIntegerField, addr 0x498b48c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IntegerField* get_parentIntegerField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IntegerField__IntegerInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__IntegerInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IntegerField__IntegerInput(__IntegerField__IntegerInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IntegerField__IntegerInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IntegerField__IntegerInput(__IntegerField__IntegerInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__IntegerField__IntegerInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::IntegerField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IntegerField*
class CORDL_TYPE IntegerField : public ::UnityEngine::UIElements::TextValueField_1<int32_t> {
public:
  // Declarations
  using IntegerInput = ::UnityEngine::UIElements::__IntegerField__IntegerInput;

  using UxmlFactory = ::UnityEngine::UIElements::__IntegerField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__IntegerField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_integerInput)) ::UnityEngine::UIElements::__IntegerField__IntegerInput* integerInput;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x498b2c8, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue);

  /// @brief Method CanTryParse, addr 0x498b2a4, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::IntegerField* New_ctor();

  static inline ::UnityEngine::UIElements::IntegerField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x498afd8, size 0xdc, virtual true, abstract: false, final false
  inline int32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x498af20, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(int32_t v);

  /// @brief Method .ctor, addr 0x498b0b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x498b0c0, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_integerInput, addr 0x498ae9c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__IntegerField__IntegerInput* get_integerInput();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IntegerField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IntegerField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IntegerField*, "UnityEngine.UIElements", "IntegerField");
NEED_NO_BOX(::UnityEngine::UIElements::__IntegerField__IntegerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IntegerField__IntegerInput*, "UnityEngine.UIElements", "IntegerField/IntegerInput");
NEED_NO_BOX(::UnityEngine::UIElements::__IntegerField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IntegerField__UxmlFactory*, "UnityEngine.UIElements", "IntegerField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__IntegerField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__IntegerField__UxmlTraits*, "UnityEngine.UIElements", "IntegerField/UxmlTraits");

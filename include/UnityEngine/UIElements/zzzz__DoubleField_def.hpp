#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DoubleField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class UxmlDoubleAttributeDescription;
}
namespace UnityEngine::UIElements {
class __DoubleField__DoubleInput;
}
namespace UnityEngine::UIElements {
class __DoubleField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DoubleField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DoubleField;
}
namespace UnityEngine::UIElements {
class __DoubleField__DoubleInput;
}
namespace UnityEngine::UIElements {
class __DoubleField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __DoubleField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DoubleField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DoubleField__DoubleInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DoubleField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DoubleField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DoubleField::UxmlFactory*
class CORDL_TYPE __DoubleField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DoubleField*, ::UnityEngine::UIElements::__DoubleField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__DoubleField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4917510, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DoubleField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DoubleField__UxmlFactory(__DoubleField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DoubleField__UxmlFactory(__DoubleField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DoubleField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DoubleField::UxmlTraits*
class CORDL_TYPE __DoubleField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<double_t, ::UnityEngine::UIElements::UxmlDoubleAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__DoubleField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4917558, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DoubleField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DoubleField__UxmlTraits(__DoubleField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DoubleField__UxmlTraits(__DoubleField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DoubleField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::DoubleInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DoubleField::DoubleInput*
class CORDL_TYPE __DoubleField__DoubleInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<double_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentDoubleField)) ::UnityEngine::UIElements::DoubleField* parentDoubleField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4917678, size 0x194, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, double_t startValue);

  static inline ::UnityEngine::UIElements::__DoubleField__DoubleInput* New_ctor();

  /// @brief Method StringToValue, addr 0x4917858, size 0xa8, virtual true, abstract: false, final false
  inline double_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x491780c, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(double_t v);

  /// @brief Method .ctor, addr 0x491732c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4917620, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentDoubleField, addr 0x49175a0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DoubleField* get_parentDoubleField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DoubleField__DoubleInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__DoubleInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DoubleField__DoubleInput(__DoubleField__DoubleInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DoubleField__DoubleInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DoubleField__DoubleInput(__DoubleField__DoubleInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DoubleField__DoubleInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DoubleField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DoubleField*
class CORDL_TYPE DoubleField : public ::UnityEngine::UIElements::TextValueField_1<double_t> {
public:
  // Declarations
  using DoubleInput = ::UnityEngine::UIElements::__DoubleField__DoubleInput;

  using UxmlFactory = ::UnityEngine::UIElements::__DoubleField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__DoubleField__UxmlTraits;

  __declspec(property(get = get_doubleInput)) ::UnityEngine::UIElements::__DoubleField__DoubleInput* doubleInput;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49173e4, size 0x5c, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, double_t startValue);

  /// @brief Method CanTryParse, addr 0x49173c0, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::DoubleField* New_ctor();

  static inline ::UnityEngine::UIElements::DoubleField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49170f4, size 0xdc, virtual true, abstract: false, final false
  inline double_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x491703c, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(double_t v);

  /// @brief Method .ctor, addr 0x49171d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49171dc, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_doubleInput, addr 0x4916fb8, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DoubleField__DoubleInput* get_doubleInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleField(DoubleField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleField(DoubleField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DoubleField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DoubleField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DoubleField*, "UnityEngine.UIElements", "DoubleField");
NEED_NO_BOX(::UnityEngine::UIElements::__DoubleField__DoubleInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DoubleField__DoubleInput*, "UnityEngine.UIElements", "DoubleField/DoubleInput");
NEED_NO_BOX(::UnityEngine::UIElements::__DoubleField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DoubleField__UxmlFactory*, "UnityEngine.UIElements", "DoubleField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__DoubleField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DoubleField__UxmlTraits*, "UnityEngine.UIElements", "DoubleField/UxmlTraits");

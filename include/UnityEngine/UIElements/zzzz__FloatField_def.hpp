#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FloatField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class __FloatField__FloatInput;
}
namespace UnityEngine::UIElements {
class __FloatField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __FloatField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FloatField;
}
namespace UnityEngine::UIElements {
class __FloatField__FloatInput;
}
namespace UnityEngine::UIElements {
class __FloatField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __FloatField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FloatField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FloatField__FloatInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FloatField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FloatField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FloatField::UxmlFactory*
class CORDL_TYPE __FloatField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::FloatField*, ::UnityEngine::UIElements::__FloatField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__FloatField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4919d4c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatField__UxmlFactory(__FloatField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatField__UxmlFactory(__FloatField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FloatField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FloatField::UxmlTraits*
class CORDL_TYPE __FloatField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<float_t, ::UnityEngine::UIElements::UxmlFloatAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__FloatField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x4919d94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatField__UxmlTraits(__FloatField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatField__UxmlTraits(__FloatField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FloatField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::FloatInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FloatField::FloatInput*
class CORDL_TYPE __FloatField__FloatInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<float_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentFloatField)) ::UnityEngine::UIElements::FloatField* parentFloatField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4919eb4, size 0x1ac, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float_t startValue);

  static inline ::UnityEngine::UIElements::__FloatField__FloatInput* New_ctor();

  /// @brief Method StringToValue, addr 0x491a0ac, size 0xa8, virtual true, abstract: false, final false
  inline float_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x491a060, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(float_t v);

  /// @brief Method .ctor, addr 0x4919b68, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x4919e5c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentFloatField, addr 0x4919ddc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FloatField* get_parentFloatField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FloatField__FloatInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__FloatInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FloatField__FloatInput(__FloatField__FloatInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FloatField__FloatInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FloatField__FloatInput(__FloatField__FloatInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FloatField__FloatInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::FloatField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FloatField*
class CORDL_TYPE FloatField : public ::UnityEngine::UIElements::TextValueField_1<float_t> {
public:
  // Declarations
  using FloatInput = ::UnityEngine::UIElements::__FloatField__FloatInput;

  using UxmlFactory = ::UnityEngine::UIElements::__FloatField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__FloatField__UxmlTraits;

  __declspec(property(get = get_floatInput)) ::UnityEngine::UIElements::__FloatField__FloatInput* floatInput;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x4919c20, size 0x5c, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, float_t startValue);

  /// @brief Method CanTryParse, addr 0x4919bfc, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::FloatField* New_ctor();

  static inline ::UnityEngine::UIElements::FloatField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x4919930, size 0xdc, virtual true, abstract: false, final false
  inline float_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x4919878, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(float_t v);

  /// @brief Method .ctor, addr 0x4919a0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4919a18, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_floatInput, addr 0x49197f4, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__FloatField__FloatInput* get_floatInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatField(FloatField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatField(FloatField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FloatField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FloatField*, "UnityEngine.UIElements", "FloatField");
NEED_NO_BOX(::UnityEngine::UIElements::__FloatField__FloatInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FloatField__FloatInput*, "UnityEngine.UIElements", "FloatField/FloatInput");
NEED_NO_BOX(::UnityEngine::UIElements::__FloatField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FloatField__UxmlFactory*, "UnityEngine.UIElements", "FloatField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__FloatField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FloatField__UxmlTraits*, "UnityEngine.UIElements", "FloatField/UxmlTraits");

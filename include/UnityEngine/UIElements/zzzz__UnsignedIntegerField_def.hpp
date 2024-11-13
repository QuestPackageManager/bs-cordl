#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UnsignedIntegerField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextValueFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsignedIntegerField)
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class UxmlUnsignedIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UnsignedIntegerInput;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UnsignedIntegerField;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UnsignedIntegerInput;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __UnsignedIntegerField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UnsignedIntegerField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedIntegerField::UxmlFactory*
class CORDL_TYPE __UnsignedIntegerField__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::UnsignedIntegerField*, ::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49abc7c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedIntegerField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedIntegerField__UxmlFactory(__UnsignedIntegerField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedIntegerField__UxmlFactory(__UnsignedIntegerField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedIntegerField::UxmlTraits*
class CORDL_TYPE __UnsignedIntegerField__UxmlTraits : public ::UnityEngine::UIElements::TextValueFieldTraits_2<uint32_t, ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49abcc4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedIntegerField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedIntegerField__UxmlTraits(__UnsignedIntegerField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedIntegerField__UxmlTraits(__UnsignedIntegerField__UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5693 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UnsignedIntegerInput
// SizeInfo { instance_size: 1032, native_size: -1, calculated_instance_size: 1032, calculated_native_size: 1032, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnsignedIntegerField::UnsignedIntegerInput*
class CORDL_TYPE __UnsignedIntegerField__UnsignedIntegerInput : public ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<uint32_t> {
public:
  // Declarations
  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_parentUnsignedIntegerField)) ::UnityEngine::UIElements::UnsignedIntegerField* parentUnsignedIntegerField;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49abde4, size 0x250, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint32_t startValue);

  static inline ::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput* New_ctor();

  /// @brief Method StringToValue, addr 0x49ac080, size 0xa8, virtual true, abstract: false, final false
  inline uint32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49ac034, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint32_t v);

  /// @brief Method .ctor, addr 0x49aba90, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0x49abd8c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_parentUnsignedIntegerField, addr 0x49abd0c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UnsignedIntegerField* get_parentUnsignedIntegerField();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsignedIntegerField__UnsignedIntegerInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UnsignedIntegerInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsignedIntegerField__UnsignedIntegerInput(__UnsignedIntegerField__UnsignedIntegerInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsignedIntegerField__UnsignedIntegerInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsignedIntegerField__UnsignedIntegerInput(__UnsignedIntegerField__UnsignedIntegerInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput, 0x408>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UnsignedIntegerField
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1122, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UnsignedIntegerField*
class CORDL_TYPE UnsignedIntegerField : public ::UnityEngine::UIElements::TextValueField_1<uint32_t> {
public:
  // Declarations
  using UnsignedIntegerInput = ::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput;

  using UxmlFactory = ::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_integerInput)) ::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput* integerInput;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49abb48, size 0x64, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, uint32_t startValue);

  /// @brief Method CanTryParse, addr 0x49abb24, size 0x24, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  static inline ::UnityEngine::UIElements::UnsignedIntegerField* New_ctor();

  static inline ::UnityEngine::UIElements::UnsignedIntegerField* New_ctor(::StringW label, int32_t maxLength);

  /// @brief Method StringToValue, addr 0x49ab858, size 0xdc, virtual true, abstract: false, final false
  inline uint32_t StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0x49ab7a0, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ValueToString(uint32_t v);

  /// @brief Method .ctor, addr 0x49ab934, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49ab940, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_integerInput, addr 0x49ab71c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput* get_integerInput();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsignedIntegerField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsignedIntegerField(UnsignedIntegerField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsignedIntegerField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsignedIntegerField(UnsignedIntegerField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5695 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsignedIntegerField, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UnsignedIntegerField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsignedIntegerField*, "UnityEngine.UIElements", "UnsignedIntegerField");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedIntegerField__UnsignedIntegerInput*, "UnityEngine.UIElements", "UnsignedIntegerField/UnsignedIntegerInput");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlFactory*, "UnityEngine.UIElements", "UnsignedIntegerField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UnsignedIntegerField__UxmlTraits*, "UnityEngine.UIElements", "UnsignedIntegerField/UxmlTraits");

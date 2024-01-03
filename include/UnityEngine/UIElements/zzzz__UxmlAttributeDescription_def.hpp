#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlAttributeDescription)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
namespace UnityEngine::UIElements {
struct __UxmlAttributeDescription__Use;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __UxmlAttributeDescription__Use;
}
namespace UnityEngine::UIElements {
class UxmlAttributeDescription;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__UxmlAttributeDescription__Use);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlAttributeDescription);
// Type: ::Use
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6980))
// CS Name: ::UxmlAttributeDescription::Use
struct CORDL_TYPE __UxmlAttributeDescription__Use {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UxmlAttributeDescription__Use_Unwrapped
  enum struct ____UxmlAttributeDescription__Use_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Optional = static_cast<int32_t>(0x1),
    __E_Prohibited = static_cast<int32_t>(0x2),
    __E_Required = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UxmlAttributeDescription__Use_Unwrapped() const noexcept {
    return static_cast<____UxmlAttributeDescription__Use_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UxmlAttributeDescription__Use(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlAttributeDescription__Use();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const None;

  /// @brief Field Optional value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const Optional;

  /// @brief Field Prohibited value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const Prohibited;

  /// @brief Field Required value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const Required;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlAttributeDescription__Use, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__UxmlAttributeDescription__Use, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlAttributeDescription
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6980))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6981))
// CS Name: ::UnityEngine.UIElements::UxmlAttributeDescription*
class CORDL_TYPE UxmlAttributeDescription : public ::System::Object {
public:
  // Declarations
  using Use = ::UnityEngine::UIElements::__UxmlAttributeDescription__Use;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__name_k__BackingField, put = __set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field m_ObsoleteNames, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ObsoleteNames, put = __set_m_ObsoleteNames))::ArrayW<::StringW, ::Array<::StringW>*> m_ObsoleteNames;

  /// @brief Field <type>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__type_k__BackingField, put = __set__type_k__BackingField))::StringW _type_k__BackingField;

  /// @brief Field <typeNamespace>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__typeNamespace_k__BackingField, put = __set__typeNamespace_k__BackingField))::StringW _typeNamespace_k__BackingField;

  /// @brief Field <use>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __get__use_k__BackingField, put = __set__use_k__BackingField))::UnityEngine::UIElements::__UxmlAttributeDescription__Use _use_k__BackingField;

  /// @brief Field <restriction>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__restriction_k__BackingField, put = __set__restriction_k__BackingField))::UnityEngine::UIElements::UxmlTypeRestriction* _restriction_k__BackingField;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(put = set_obsoleteNames))::System::Collections::Generic::IEnumerable_1<::StringW>* obsoleteNames;

  __declspec(property(put = set_type))::StringW type;

  __declspec(property(put = set_typeNamespace))::StringW typeNamespace;

  __declspec(property(put = set_use))::UnityEngine::UIElements::__UxmlAttributeDescription__Use use;

  __declspec(property(put = set_restriction))::UnityEngine::UIElements::UxmlTypeRestriction* restriction;

  constexpr ::StringW& __get__name_k__BackingField();

  constexpr ::StringW const& __get__name_k__BackingField() const;

  constexpr void __set__name_k__BackingField(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_ObsoleteNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_ObsoleteNames() const;

  constexpr void __set_m_ObsoleteNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get__type_k__BackingField();

  constexpr ::StringW const& __get__type_k__BackingField() const;

  constexpr void __set__type_k__BackingField(::StringW value);

  constexpr ::StringW& __get__typeNamespace_k__BackingField();

  constexpr ::StringW const& __get__typeNamespace_k__BackingField() const;

  constexpr void __set__typeNamespace_k__BackingField(::StringW value);

  constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use& __get__use_k__BackingField();

  constexpr ::UnityEngine::UIElements::__UxmlAttributeDescription__Use const& __get__use_k__BackingField() const;

  constexpr void __set__use_k__BackingField(::UnityEngine::UIElements::__UxmlAttributeDescription__Use value);

  constexpr ::UnityEngine::UIElements::UxmlTypeRestriction*& __get__restriction_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlTypeRestriction*> const& __get__restriction_k__BackingField() const;

  constexpr void __set__restriction_k__BackingField(::UnityEngine::UIElements::UxmlTypeRestriction* value);

  static inline ::UnityEngine::UIElements::UxmlAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2e0e8c8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_name, addr 0x2e0e8ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_name, addr 0x2e0e8f4, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_obsoleteNames, addr 0x2e0e8fc, size 0x5c, virtual false, abstract: false, final false
  inline void set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method set_type, addr 0x2e0e958, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::StringW value);

  /// @brief Method set_typeNamespace, addr 0x2e0e960, size 0x8, virtual false, abstract: false, final false
  inline void set_typeNamespace(::StringW value);

  /// @brief Method set_use, addr 0x2e0e968, size 0x8, virtual false, abstract: false, final false
  inline void set_use(::UnityEngine::UIElements::__UxmlAttributeDescription__Use value);

  /// @brief Method set_restriction, addr 0x2e0e970, size 0x8, virtual false, abstract: false, final false
  inline void set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction* value);

  /// @brief Method TryGetValueFromBagAsString, addr 0x2e0e978, size 0x474, virtual false, abstract: false, final false
  inline bool TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ByRef<::StringW> value);

  /// @brief Method TryGetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue,
                                 ByRef<T> value);

  /// @brief Method GetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAttributeDescription(UxmlAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAttributeDescription(UxmlAttributeDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAttributeDescription();

public:
  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field m_ObsoleteNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ObsoleteNames;

  /// @brief Field <type>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____type_k__BackingField;

  /// @brief Field <typeNamespace>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____typeNamespace_k__BackingField;

  /// @brief Field <use>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::UIElements::__UxmlAttributeDescription__Use ____use_k__BackingField;

  /// @brief Field <restriction>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlTypeRestriction* ____restriction_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAttributeDescription, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ___m_ObsoleteNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____typeNamespace_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____use_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeDescription, ____restriction_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlAttributeDescription__Use, "UnityEngine.UIElements", "UxmlAttributeDescription/Use");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeDescription*, "UnityEngine.UIElements", "UxmlAttributeDescription");

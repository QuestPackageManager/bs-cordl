#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlLongAttributeDescription)
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
class __UxmlLongAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlLongAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlLongAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlLongAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6989))
// CS Name: ::UxmlLongAttributeDescription::<>c*
class CORDL_TYPE __UxmlLongAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UxmlLongAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_3<::StringW, int64_t, int64_t>* __9__3_0;

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlLongAttributeDescription____c* value);

  static inline ::UnityEngine::UIElements::__UxmlLongAttributeDescription____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, int64_t, int64_t>* value);

  static inline ::System::Func_3<::StringW, int64_t, int64_t>* getStaticF___9__3_0();

  static inline ::UnityEngine::UIElements::__UxmlLongAttributeDescription____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e0fa14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x2e0fa1c, size 0x40, virtual false, abstract: false, final false
  inline int64_t _GetValueFromBag_b__3_0(::StringW s, int64_t l);

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlLongAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlLongAttributeDescription____c(__UxmlLongAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlLongAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlLongAttributeDescription____c(__UxmlLongAttributeDescription____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlLongAttributeDescription____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlLongAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlLongAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 333 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6990))
// CS Name: ::UnityEngine.UIElements::UxmlLongAttributeDescription*
class CORDL_TYPE UxmlLongAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlLongAttributeDescription____c;

  static inline ::UnityEngine::UIElements::UxmlLongAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2e0f774, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetValueFromBag, addr 0x2e0f810, size 0x164, virtual true, abstract: false, final false
  inline int64_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method ConvertValueToLong, addr 0x2e0f974, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t ConvertValueToLong(::StringW v, int64_t defaultValue);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlLongAttributeDescription(UxmlLongAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlLongAttributeDescription(UxmlLongAttributeDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlLongAttributeDescription();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlLongAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlLongAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlLongAttributeDescription*, "UnityEngine.UIElements", "UxmlLongAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlLongAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlLongAttributeDescription____c*, "UnityEngine.UIElements", "UxmlLongAttributeDescription/<>c");

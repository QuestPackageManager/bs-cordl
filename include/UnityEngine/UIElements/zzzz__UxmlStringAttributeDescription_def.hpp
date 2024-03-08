#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlStringAttributeDescription)
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
class __UxmlStringAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlStringAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStringAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlStringAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UxmlStringAttributeDescription::<>c*
class CORDL_TYPE __UxmlStringAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UxmlStringAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_3<::StringW, ::StringW, ::StringW>* __9__3_0;

  static inline ::UnityEngine::UIElements::__UxmlStringAttributeDescription____c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x2f77304, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _GetValueFromBag_b__3_0(::StringW s, ::StringW t);

  /// @brief Method .ctor, addr 0x2f772fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__UxmlStringAttributeDescription____c* getStaticF___9();

  static inline ::System::Func_3<::StringW, ::StringW, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlStringAttributeDescription____c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, ::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlStringAttributeDescription____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UxmlStringAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlStringAttributeDescription____c(__UxmlStringAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlStringAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlStringAttributeDescription____c(__UxmlStringAttributeDescription____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlStringAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlStringAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UxmlStringAttributeDescription*
class CORDL_TYPE UxmlStringAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlStringAttributeDescription____c;

  /// @brief Method GetValueFromBag, addr 0x2f77134, size 0x164, virtual true, abstract: false, final false
  inline ::StringW GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2f76398, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlStringAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlStringAttributeDescription(UxmlStringAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlStringAttributeDescription(UxmlStringAttributeDescription const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStringAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStringAttributeDescription*, "UnityEngine.UIElements", "UxmlStringAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlStringAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlStringAttributeDescription____c*, "UnityEngine.UIElements", "UxmlStringAttributeDescription/<>c");

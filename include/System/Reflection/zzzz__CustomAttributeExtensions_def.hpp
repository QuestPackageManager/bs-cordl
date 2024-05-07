#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomAttributeExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class CustomAttributeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::CustomAttributeExtensions);
// Type: System.Reflection::CustomAttributeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::CustomAttributeExtensions*
class CORDL_TYPE CustomAttributeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCustomAttribute, addr 0x286e1ac, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x286e1b4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttribute, addr 0x286e1bc, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Attribute* GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCustomAttribute(::System::Reflection::Assembly* element);

  /// @brief Method GetCustomAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCustomAttribute(::System::Reflection::MemberInfo* element);

  /// @brief Method GetCustomAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCustomAttribute(::System::Reflection::MemberInfo* element, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x286e1c8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::Assembly* element);

  /// @brief Method GetCustomAttributes, addr 0x286e1d0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* element);

  /// @brief Method GetCustomAttributes, addr 0x286e1d8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

  /// @brief Method GetCustomAttributes, addr 0x286e1e0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(::System::Reflection::MemberInfo* element);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(::System::Reflection::MemberInfo* element, bool inherit);

  /// @brief Method IsDefined, addr 0x286e1ec, size 0x8, virtual false, abstract: false, final false
  static inline bool IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomAttributeExtensions(CustomAttributeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomAttributeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomAttributeExtensions(CustomAttributeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeExtensions, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::CustomAttributeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeExtensions*, "System.Reflection", "CustomAttributeExtensions");

#pragma once
// IWYU pragma private; include "System/TypeNames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNames)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class TypeName;
}
namespace System {
class __TypeNames__ATypeName;
}
// Forward declare root types
namespace System {
class TypeNames;
}
namespace System {
class __TypeNames__ATypeName;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeNames);
MARK_REF_PTR_T(::System::__TypeNames__ATypeName);
// Type: ::ATypeName
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TypeNames::ATypeName*
class CORDL_TYPE __TypeNames__ATypeName : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
  constexpr operator ::System::IEquatable_1<::System::TypeName*>*() noexcept;

  /// @brief Convert operator to "::System::TypeName"
  constexpr operator ::System::TypeName*() noexcept;

  /// @brief Method Equals, addr 0x3dccf7c, size 0x60, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x3dcce84, size 0xd0, virtual true, abstract: false, final true
  inline bool Equals(::System::TypeName* other);

  /// @brief Method GetHashCode, addr 0x3dccf54, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::__TypeNames__ATypeName* New_ctor();

  /// @brief Method .ctor, addr 0x3dccfdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DisplayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DisplayName();

  /// @brief Convert to "::System::IEquatable_1<::System::TypeName*>"
  constexpr ::System::IEquatable_1<::System::TypeName*>* i___System__IEquatable_1___System__TypeName__() noexcept;

  /// @brief Convert to "::System::TypeName"
  constexpr ::System::TypeName* i___System__TypeName() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeNames__ATypeName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeNames__ATypeName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeNames__ATypeName(__TypeNames__ATypeName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeNames__ATypeName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeNames__ATypeName(__TypeNames__ATypeName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeNames__ATypeName, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::TypeNames
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TypeNames*
class CORDL_TYPE TypeNames : public ::System::Object {
public:
  // Declarations
  using ATypeName = ::System::__TypeNames__ATypeName;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeNames(TypeNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeNames(TypeNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNames, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TypeNames);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNames*, "System", "TypeNames");
NEED_NO_BOX(::System::__TypeNames__ATypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeNames__ATypeName*, "System", "TypeNames/ATypeName");

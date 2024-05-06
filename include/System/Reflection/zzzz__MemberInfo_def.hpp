#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemberInfo)
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class Module;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class MemberInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MemberInfo);
// Type: System.Reflection::MemberInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::MemberInfo*
class CORDL_TYPE MemberInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Method Equals, addr 0x2865e88, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetHashCode, addr 0x2865e98, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::MemberInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2865d20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DeclaringType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_MemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_MetadataToken, addr 0x286763c, size 0x40, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x2867568, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
  constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

  /// @brief Method op_Equality, addr 0x286767c, size 0x35c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right);

  /// @brief Method op_Inequality, addr 0x2867c0c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberInfo(MemberInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberInfo(MemberInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::MemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfo*, "System.Reflection", "MemberInfo");

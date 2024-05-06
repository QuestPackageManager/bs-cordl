#pragma once
// IWYU pragma private; include "System/Reflection/ConstructorInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstructorInfo)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Reflection {
class ConstructorInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ConstructorInfo);
// Type: System.Reflection::ConstructorInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::ConstructorInfo*
class CORDL_TYPE ConstructorInfo : public ::System::Reflection::MethodBase {
public:
  // Declarations
  /// @brief Field ConstructorName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConstructorName, put = setStaticF_ConstructorName))::StringW ConstructorName;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  /// @brief Field TypeConstructorName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeConstructorName, put = setStaticF_TypeConstructorName))::StringW TypeConstructorName;

  /// @brief Method Equals, addr 0x2865ac8, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2865ad8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                  ::System::Globalization::CultureInfo* culture);

  /// @brief Method Invoke, addr 0x2865aa8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  static inline ::System::Reflection::ConstructorInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2865a90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ConstructorName();

  static inline ::StringW getStaticF_TypeConstructorName();

  /// @brief Method get_MemberType, addr 0x2865aa0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method op_Equality, addr 0x2865ae8, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right);

  /// @brief Method op_Inequality, addr 0x2865b14, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right);

  static inline void setStaticF_ConstructorName(::StringW value);

  static inline void setStaticF_TypeConstructorName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructorInfo(ConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructorInfo(ConstructorInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ConstructorInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ConstructorInfo*, "System.Reflection", "ConstructorInfo");

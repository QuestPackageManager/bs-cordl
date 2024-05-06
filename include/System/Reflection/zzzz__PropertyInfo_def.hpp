#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyInfo)
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
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class PropertyInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::PropertyInfo);
// Type: System.Reflection::PropertyInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::PropertyInfo*
class CORDL_TYPE PropertyInfo : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  /// @brief Method Equals, addr 0x2869710, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetGetMethod, addr 0x2869680, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetGetMethod();

  /// @brief Method GetGetMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);

  /// @brief Method GetHashCode, addr 0x2869718, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIndexParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters();

  /// @brief Method GetSetMethod, addr 0x2869694, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetSetMethod();

  /// @brief Method GetSetMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);

  /// @brief Method GetValue, addr 0x28696a8, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method GetValue, addr 0x28696bc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  static inline ::System::Reflection::PropertyInfo* New_ctor();

  /// @brief Method SetValue, addr 0x28696dc, size 0x14, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value);

  /// @brief Method SetValue, addr 0x28696f0, size 0x20, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x2869670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CanWrite();

  /// @brief Method get_MemberType, addr 0x2869678, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_PropertyType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method op_Equality, addr 0x2867be0, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right);

  /// @brief Method op_Inequality, addr 0x2867ba4, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyInfo(PropertyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyInfo(PropertyInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PropertyInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::PropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PropertyInfo*, "System.Reflection", "PropertyInfo");

#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ReflectionDelegateFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionDelegateFactory)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
class CORDL_TYPE ReflectionDelegateFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDefaultConstructor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Func_1<T>* CreateDefaultConstructor(::System::Type* type);

  /// @brief Method CreateGet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CreateGet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Func_2<T, ::System::Object*>* CreateGet(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method CreateMethodCall, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::Newtonsoft::Json::Utilities::MethodCall_2<T, ::System::Object*>* CreateMethodCall(::System::Reflection::MethodBase* method);

  /// @brief Method CreateParameterizedConstructor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* CreateParameterizedConstructor(::System::Reflection::MethodBase* method);

  /// @brief Method CreateSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method CreateSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method CreateSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Action_2<T, ::System::Object*>* CreateSet(::System::Reflection::PropertyInfo* propertyInfo);

  static inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3ecc358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionDelegateFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionDelegateFactory(ReflectionDelegateFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionDelegateFactory(ReflectionDelegateFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionDelegateFactory, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");

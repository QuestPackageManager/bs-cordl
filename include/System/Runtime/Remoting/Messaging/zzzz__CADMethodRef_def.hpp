#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADMethodRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CADMethodRef)
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADMethodRef);
// Type: System.Runtime.Remoting.Messaging::CADMethodRef
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::CADMethodRef*
class CORDL_TYPE CADMethodRef : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctor, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_ctor, put = __cordl_internal_set_ctor)) bool ctor;

  /// @brief Field generic_arg_names, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_generic_arg_names, put = __cordl_internal_set_generic_arg_names))::ArrayW<::StringW, ::Array<::StringW>*> generic_arg_names;

  /// @brief Field methodName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_methodName, put = __cordl_internal_set_methodName))::StringW methodName;

  /// @brief Field param_names, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_param_names, put = __cordl_internal_set_param_names))::ArrayW<::StringW, ::Array<::StringW>*> param_names;

  /// @brief Field typeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName))::StringW typeName;

  /// @brief Method GetTypes, addr 0x2854e94, size 0x14c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes(::ArrayW<::StringW, ::Array<::StringW>*> typeArray);

  static inline ::System::Runtime::Remoting::Messaging::CADMethodRef* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

  /// @brief Method Resolve, addr 0x2854fe0, size 0x520, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodBase* Resolve();

  constexpr bool const& __cordl_internal_get_ctor() const;

  constexpr bool& __cordl_internal_get_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_generic_arg_names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_generic_arg_names();

  constexpr ::StringW const& __cordl_internal_get_methodName() const;

  constexpr ::StringW& __cordl_internal_get_methodName();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_param_names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_param_names();

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_ctor(bool value);

  constexpr void __cordl_internal_set_generic_arg_names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_methodName(::StringW value);

  constexpr void __cordl_internal_set_param_names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x2855500, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMethodRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADMethodRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMethodRef(CADMethodRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMethodRef(CADMethodRef const&) = delete;

  /// @brief Field ctor, offset: 0x10, size: 0x1, def value: None
  bool ___ctor;

  /// @brief Field typeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___typeName;

  /// @brief Field methodName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___methodName;

  /// @brief Field param_names, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___param_names;

  /// @brief Field generic_arg_names, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___generic_arg_names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMethodRef, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodRef, ___ctor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodRef, ___typeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodRef, ___methodName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodRef, ___param_names) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::CADMethodRef, ___generic_arg_names) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodRef*, "System.Runtime.Remoting.Messaging", "CADMethodRef");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MethodReturnDictionary)
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodReturnDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MethodReturnDictionary);
// Type: System.Runtime.Remoting.Messaging::MethodReturnDictionary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::MethodReturnDictionary*
class CORDL_TYPE MethodReturnDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary {
public:
  // Declarations
  /// @brief Field InternalExceptionKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalExceptionKeys, put = setStaticF_InternalExceptionKeys))::ArrayW<::StringW, ::Array<::StringW>*> InternalExceptionKeys;

  /// @brief Field InternalReturnKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalReturnKeys, put = setStaticF_InternalReturnKeys))::ArrayW<::StringW, ::Array<::StringW>*> InternalReturnKeys;

  static inline ::System::Runtime::Remoting::Messaging::MethodReturnDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message);

  /// @brief Method .ctor, addr 0x25a3530, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InternalExceptionKeys();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InternalReturnKeys();

  static inline void setStaticF_InternalExceptionKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_InternalReturnKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodReturnDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodReturnDictionary(MethodReturnDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodReturnDictionary(MethodReturnDictionary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MethodReturnDictionary, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodReturnDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodReturnDictionary*, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");

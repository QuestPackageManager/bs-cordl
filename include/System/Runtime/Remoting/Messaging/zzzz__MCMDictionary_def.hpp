#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MCMDictionary)
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MCMDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MCMDictionary);
// Type: System.Runtime.Remoting.Messaging::MCMDictionary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::MCMDictionary*
class CORDL_TYPE MCMDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary {
public:
  // Declarations
  /// @brief Field InternalKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalKeys, put = setStaticF_InternalKeys))::ArrayW<::StringW, ::Array<::StringW>*> InternalKeys;

  static inline ::System::Runtime::Remoting::Messaging::MCMDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  /// @brief Method .ctor, addr 0x282e1c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_InternalKeys();

  static inline void setStaticF_InternalKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MCMDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MCMDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MCMDictionary(MCMDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MCMDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MCMDictionary(MCMDictionary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MCMDictionary, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MCMDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MCMDictionary*, "System.Runtime.Remoting.Messaging", "MCMDictionary");

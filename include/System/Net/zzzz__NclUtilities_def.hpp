#pragma once
// IWYU pragma private; include "System/Net/NclUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NclUtilities)
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPHostEntry;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NclUtilities;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NclUtilities);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NclUtilities
class CORDL_TYPE NclUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field _LocalAddresses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__LocalAddresses, put = setStaticF__LocalAddresses)) ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> _LocalAddresses;

  /// @brief Field _LocalAddressesLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__LocalAddressesLock, put = setStaticF__LocalAddressesLock)) ::System::Object* _LocalAddressesLock;

  /// @brief Field _LocalDomainName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__LocalDomainName, put = setStaticF__LocalDomainName)) ::StringW _LocalDomainName;

  /// @brief Method GetLocalHost, addr 0x44a1100, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Net::IPHostEntry* GetLocalHost();

  /// @brief Method IsAddressLocal, addr 0x44a0bac, size 0x90, virtual false, abstract: false, final false
  static inline bool IsAddressLocal(::System::Net::IPAddress* ipAddress);

  /// @brief Method IsFatal, addr 0x44a0aec, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsFatal(::System::Exception* exception);

  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> getStaticF__LocalAddresses();

  static inline ::System::Object* getStaticF__LocalAddressesLock();

  static inline ::StringW getStaticF__LocalDomainName();

  /// @brief Method get_LocalAddresses, addr 0x44a0c3c, size 0x4c4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> get_LocalAddresses();

  /// @brief Method get_LocalAddressesLock, addr 0x44a1118, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* get_LocalAddressesLock();

  static inline void setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> value);

  static inline void setStaticF__LocalAddressesLock(::System::Object* value);

  static inline void setStaticF__LocalDomainName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NclUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NclUtilities(NclUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NclUtilities(NclUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NclUtilities, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NclUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NclUtilities*, "System.Net", "NclUtilities");

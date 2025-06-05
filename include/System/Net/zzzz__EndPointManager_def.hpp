#pragma once
// IWYU pragma private; include "System/Net/EndPointManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndPointManager)
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace System::Net {
class EndPointManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::EndPointManager);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.EndPointManager
class CORDL_TYPE EndPointManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field ip_to_endpoints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ip_to_endpoints, put = setStaticF_ip_to_endpoints)) ::System::Collections::Hashtable* ip_to_endpoints;

  /// @brief Method AddListener, addr 0x44c3544, size 0x71c, virtual false, abstract: false, final false
  static inline void AddListener(::System::Net::HttpListener* listener);

  /// @brief Method AddPrefix, addr 0x44c3f7c, size 0x118, virtual false, abstract: false, final false
  static inline void AddPrefix(::StringW prefix, ::System::Net::HttpListener* listener);

  /// @brief Method AddPrefixInternal, addr 0x44c3d08, size 0x15c, virtual false, abstract: false, final false
  static inline void AddPrefixInternal(::StringW p, ::System::Net::HttpListener* listener);

  /// @brief Method GetEPListener, addr 0x44c4094, size 0x3dc, virtual false, abstract: false, final false
  static inline ::System::Net::EndPointListener* GetEPListener(::StringW host, int32_t port, ::System::Net::HttpListener* listener, bool secure);

  /// @brief Method RemoveEndPoint, addr 0x44c27c4, size 0x25c, virtual false, abstract: false, final false
  static inline void RemoveEndPoint(::System::Net::EndPointListener* epl, ::System::Net::IPEndPoint* ep);

  /// @brief Method RemoveListener, addr 0x44c4470, size 0x380, virtual false, abstract: false, final false
  static inline void RemoveListener(::System::Net::HttpListener* listener);

  /// @brief Method RemovePrefix, addr 0x44c3e64, size 0x118, virtual false, abstract: false, final false
  static inline void RemovePrefix(::StringW prefix, ::System::Net::HttpListener* listener);

  /// @brief Method RemovePrefixInternal, addr 0x44c47f0, size 0x11c, virtual false, abstract: false, final false
  static inline void RemovePrefixInternal(::StringW prefix, ::System::Net::HttpListener* listener);

  static inline ::System::Collections::Hashtable* getStaticF_ip_to_endpoints();

  static inline void setStaticF_ip_to_endpoints(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndPointManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndPointManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndPointManager(EndPointManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndPointManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndPointManager(EndPointManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::EndPointManager, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::EndPointManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPointManager*, "System.Net", "EndPointManager");

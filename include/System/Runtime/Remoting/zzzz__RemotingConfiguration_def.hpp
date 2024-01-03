#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__CustomErrorsModes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemotingConfiguration)
namespace System::Runtime::Remoting {
class WellKnownClientTypeEntry;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting {
class WellKnownServiceTypeEntry;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting {
class ActivatedServiceTypeEntry;
}
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::RemotingConfiguration);
// Type: System.Runtime.Remoting::RemotingConfiguration
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3055)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3064))
// CS Name: ::System.Runtime.Remoting::RemotingConfiguration*
class CORDL_TYPE RemotingConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field applicationID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_applicationID, put = setStaticF_applicationID))::StringW applicationID;

  /// @brief Field applicationName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_applicationName, put = setStaticF_applicationName))::StringW applicationName;

  /// @brief Field processGuid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_processGuid, put = setStaticF_processGuid))::StringW processGuid;

  /// @brief Field defaultConfigRead, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_defaultConfigRead, put = setStaticF_defaultConfigRead)) bool defaultConfigRead;

  /// @brief Field defaultDelayedConfigRead, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_defaultDelayedConfigRead, put = setStaticF_defaultDelayedConfigRead)) bool defaultDelayedConfigRead;

  /// @brief Field _errorMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__errorMode, put = setStaticF__errorMode))::System::Runtime::Remoting::CustomErrorsModes _errorMode;

  /// @brief Field wellKnownClientEntries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wellKnownClientEntries, put = setStaticF_wellKnownClientEntries))::System::Collections::Hashtable* wellKnownClientEntries;

  /// @brief Field activatedClientEntries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activatedClientEntries, put = setStaticF_activatedClientEntries))::System::Collections::Hashtable* activatedClientEntries;

  /// @brief Field wellKnownServiceEntries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wellKnownServiceEntries, put = setStaticF_wellKnownServiceEntries))::System::Collections::Hashtable* wellKnownServiceEntries;

  /// @brief Field activatedServiceEntries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activatedServiceEntries, put = setStaticF_activatedServiceEntries))::System::Collections::Hashtable* activatedServiceEntries;

  /// @brief Field channelTemplates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_channelTemplates, put = setStaticF_channelTemplates))::System::Collections::Hashtable* channelTemplates;

  /// @brief Field clientProviderTemplates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clientProviderTemplates, put = setStaticF_clientProviderTemplates))::System::Collections::Hashtable* clientProviderTemplates;

  /// @brief Field serverProviderTemplates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_serverProviderTemplates, put = setStaticF_serverProviderTemplates))::System::Collections::Hashtable* serverProviderTemplates;

  static inline void setStaticF_applicationID(::StringW value);

  static inline ::StringW getStaticF_applicationID();

  static inline void setStaticF_applicationName(::StringW value);

  static inline ::StringW getStaticF_applicationName();

  static inline void setStaticF_processGuid(::StringW value);

  static inline ::StringW getStaticF_processGuid();

  static inline void setStaticF_defaultConfigRead(bool value);

  static inline bool getStaticF_defaultConfigRead();

  static inline void setStaticF_defaultDelayedConfigRead(bool value);

  static inline bool getStaticF_defaultDelayedConfigRead();

  static inline void setStaticF__errorMode(::System::Runtime::Remoting::CustomErrorsModes value);

  static inline ::System::Runtime::Remoting::CustomErrorsModes getStaticF__errorMode();

  static inline void setStaticF_wellKnownClientEntries(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_wellKnownClientEntries();

  static inline void setStaticF_activatedClientEntries(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_activatedClientEntries();

  static inline void setStaticF_wellKnownServiceEntries(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_wellKnownServiceEntries();

  static inline void setStaticF_activatedServiceEntries(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_activatedServiceEntries();

  static inline void setStaticF_channelTemplates(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_channelTemplates();

  static inline void setStaticF_clientProviderTemplates(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_clientProviderTemplates();

  static inline void setStaticF_serverProviderTemplates(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_serverProviderTemplates();

  /// @brief Method get_ApplicationName, addr 0x24867bc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW get_ApplicationName();

  /// @brief Method set_ApplicationName, addr 0x2486814, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ApplicationName(::StringW value);

  /// @brief Method get_ProcessId, addr 0x2486870, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW get_ProcessId();

  /// @brief Method LoadDefaultDelayedChannels, addr 0x2486918, size 0x36c, virtual false, abstract: false, final false
  static inline void LoadDefaultDelayedChannels();

  /// @brief Method IsActivationAllowed, addr 0x2486d3c, size 0x144, virtual false, abstract: false, final false
  static inline bool IsActivationAllowed(::System::Type* svrType);

  /// @brief Method IsRemotelyActivatedClientType, addr 0x2486e80, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(::System::Type* svrType);

  /// @brief Method IsWellKnownClientType, addr 0x248700c, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(::System::Type* svrType);

  /// @brief Method RegisterActivatedClientType, addr 0x2487198, size 0x28c, virtual false, abstract: false, final false
  static inline void RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry);

  /// @brief Method RegisterActivatedServiceType, addr 0x2487424, size 0x144, virtual false, abstract: false, final false
  static inline void RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry);

  /// @brief Method RegisterWellKnownClientType, addr 0x2487568, size 0x28c, virtual false, abstract: false, final false
  static inline void RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);

  /// @brief Method RegisterWellKnownServiceType, addr 0x24877f4, size 0x188, virtual false, abstract: false, final false
  static inline void RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry);

  /// @brief Method RegisterChannelTemplate, addr 0x2487a98, size 0x7c, virtual false, abstract: false, final false
  static inline void RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* channel);

  /// @brief Method RegisterClientProviderTemplate, addr 0x2487b14, size 0x7c, virtual false, abstract: false, final false
  static inline void RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* prov);

  /// @brief Method RegisterServerProviderTemplate, addr 0x2487b90, size 0x7c, virtual false, abstract: false, final false
  static inline void RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* prov);

  /// @brief Method RegisterChannels, addr 0x2487c0c, size 0xc90, virtual false, abstract: false, final false
  static inline void RegisterChannels(::System::Collections::ArrayList* channels, bool onlyDelayed);

  /// @brief Method RegisterTypes, addr 0x24899b8, size 0x520, virtual false, abstract: false, final false
  static inline void RegisterTypes(::System::Collections::ArrayList* types);

  /// @brief Method CustomErrorsEnabled, addr 0x2489ed8, size 0x94, virtual false, abstract: false, final false
  static inline bool CustomErrorsEnabled(bool isLocalRequest);

  /// @brief Method SetCustomErrorsMode, addr 0x2489f6c, size 0x260, virtual false, abstract: false, final false
  static inline void SetCustomErrorsMode(::StringW mode);

  // Ctor Parameters [CppParam { name: "", ty: "RemotingConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemotingConfiguration(RemotingConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemotingConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemotingConfiguration(RemotingConfiguration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemotingConfiguration();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::RemotingConfiguration, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::RemotingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingConfiguration*, "System.Runtime.Remoting", "RemotingConfiguration");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteSettings)
namespace UnityEngine {
class __RemoteSettings__UpdatedEventHandler;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class RemoteSettings;
}
namespace UnityEngine {
class __RemoteSettings__UpdatedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RemoteSettings);
MARK_REF_PTR_T(::UnityEngine::__RemoteSettings__UpdatedEventHandler);
// Type: ::UpdatedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15931))
// CS Name: ::RemoteSettings::UpdatedEventHandler*
class CORDL_TYPE __RemoteSettings__UpdatedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__RemoteSettings__UpdatedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d423e4 size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d424a0 size 0x14 virtual true final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteSettings__UpdatedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RemoteSettings__UpdatedEventHandler(__RemoteSettings__UpdatedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RemoteSettings__UpdatedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RemoteSettings__UpdatedEventHandler(__RemoteSettings__UpdatedEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RemoteSettings__UpdatedEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RemoteSettings__UpdatedEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::RemoteSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15932))
// CS Name: ::UnityEngine::RemoteSettings*
class CORDL_TYPE RemoteSettings : public ::System::Object {
public:
  // Declarations
  using UpdatedEventHandler = ::UnityEngine::__RemoteSettings__UpdatedEventHandler;

  /// @brief Field Updated, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Updated, put = setStaticF_Updated))::UnityEngine::__RemoteSettings__UpdatedEventHandler* Updated;

  /// @brief Field BeforeFetchFromServer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeforeFetchFromServer, put = setStaticF_BeforeFetchFromServer))::System::Action* BeforeFetchFromServer;

  /// @brief Field Completed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Completed, put = setStaticF_Completed))::System::Action_3<bool, bool, int32_t>* Completed;

  static inline void setStaticF_Updated(::UnityEngine::__RemoteSettings__UpdatedEventHandler* value);

  static inline ::UnityEngine::__RemoteSettings__UpdatedEventHandler* getStaticF_Updated();

  static inline void setStaticF_BeforeFetchFromServer(::System::Action* value);

  static inline ::System::Action* getStaticF_BeforeFetchFromServer();

  static inline void setStaticF_Completed(::System::Action_3<bool, bool, int32_t>* value);

  static inline ::System::Action_3<bool, bool, int32_t>* getStaticF_Completed();

  /// @brief Method RemoteSettingsUpdated addr 0x2d42294 size 0x64 virtual false final false
  static inline void RemoteSettingsUpdated(bool wasLastUpdatedFromServer);

  /// @brief Method RemoteSettingsBeforeFetchFromServer addr 0x2d422f8 size 0x64 virtual false final false
  static inline void RemoteSettingsBeforeFetchFromServer();

  /// @brief Method RemoteSettingsUpdateCompleted addr 0x2d4235c size 0x88 virtual false final false
  static inline void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response);

  // Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteSettings(RemoteSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteSettings(RemoteSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RemoteSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteSettings*, "UnityEngine", "RemoteSettings");
NEED_NO_BOX(::UnityEngine::__RemoteSettings__UpdatedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__RemoteSettings__UpdatedEventHandler*, "UnityEngine", "RemoteSettings/UpdatedEventHandler");

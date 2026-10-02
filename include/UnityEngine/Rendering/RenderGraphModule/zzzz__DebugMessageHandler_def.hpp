#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/DebugMessageHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/zzzz__DeviceType_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugMessageHandler)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_AnalyticsPayload;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_DebugDataPayload;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_IPayload;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugMessageHandler_MessageType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_DebugData;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct DebugMessageHandler_MessageType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_AnalyticsPayload;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_DebugDataPayload;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class DebugMessageHandler_IPayload;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload*);
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, "UnityEngine.Rendering.RenderGraphModule", "DebugMessageHandler/MessageType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler*, "UnityEngine.Rendering.RenderGraphModule", "DebugMessageHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload*, "UnityEngine.Rendering.RenderGraphModule", "DebugMessageHandler/AnalyticsPayload");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload*, "UnityEngine.Rendering.RenderGraphModule", "DebugMessageHandler/DebugDataPayload");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*, "UnityEngine.Rendering.RenderGraphModule", "DebugMessageHandler/IPayload");
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler/MessageType
struct CORDL_TYPE DebugMessageHandler_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DebugMessageHandler_MessageType_Unwrapped
  enum struct __DebugMessageHandler_MessageType_Unwrapped : uint8_t {
    __E_Activate = static_cast<uint8_t>(0x0u),
    __E_DebugData = static_cast<uint8_t>(0x1u),
    __E_AnalyticsData = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugMessageHandler_MessageType_Unwrapped() const noexcept {
    return static_cast<__DebugMessageHandler_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMessageHandler_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr DebugMessageHandler_MessageType(uint8_t value__) noexcept;

  /// @brief Field Activate value: U8(0)
  static ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType const Activate;

  /// @brief Field AnalyticsData value: U8(2)
  static ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType const AnalyticsData;

  /// @brief Field DebugData value: U8(1)
  static ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType const DebugData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9274 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler/IPayload
class CORDL_TYPE DebugMessageHandler_IPayload : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isCompatible)) bool isCompatible;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* New_ctor();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x6bf3280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isCompatible, addr 0x6bf30c0, size 0x10, virtual false, abstract: false, final false
  inline bool get_isCompatible();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMessageHandler_IPayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_IPayload", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugMessageHandler_IPayload(DebugMessageHandler_IPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_IPayload", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugMessageHandler_IPayload(DebugMessageHandler_IPayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9275 };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload, ___version) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.EntityId, UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler::IPayload
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler/DebugDataPayload
class CORDL_TYPE DebugMessageHandler_DebugDataPayload : public ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload {
public:
  // Declarations
  /// @brief Field debugData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_debugData, put = __cordl_internal_set_debugData)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* debugData;

  /// @brief Field executionId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_executionId, put = __cordl_internal_set_executionId)) ::UnityEngine::EntityId executionId;

  /// @brief Field graphName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_graphName, put = __cordl_internal_set_graphName)) ::StringW graphName;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* const& __cordl_internal_get_debugData() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*& __cordl_internal_get_debugData();

  constexpr ::UnityEngine::EntityId const& __cordl_internal_get_executionId() const;

  constexpr ::UnityEngine::EntityId& __cordl_internal_get_executionId();

  constexpr ::StringW const& __cordl_internal_get_graphName() const;

  constexpr ::StringW& __cordl_internal_get_graphName();

  constexpr void __cordl_internal_set_debugData(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* value);

  constexpr void __cordl_internal_set_executionId(::UnityEngine::EntityId value);

  constexpr void __cordl_internal_set_graphName(::StringW value);

  /// @brief Method .ctor, addr 0x6bf30bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMessageHandler_DebugDataPayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_DebugDataPayload", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugMessageHandler_DebugDataPayload(DebugMessageHandler_DebugDataPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_DebugDataPayload", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugMessageHandler_DebugDataPayload(DebugMessageHandler_DebugDataPayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9276 };

  /// @brief Field graphName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___graphName;

  /// @brief Field executionId, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::EntityId ___executionId;

  /// @brief Field debugData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* ___debugData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload, ___graphName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload, ___executionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload, ___debugData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.DeviceType, UnityEngine.Rendering.GraphicsDeviceType, UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler::IPayload
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler/AnalyticsPayload
class CORDL_TYPE DebugMessageHandler_AnalyticsPayload : public ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload {
public:
  // Declarations
  /// @brief Field deviceModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_deviceModel, put = __cordl_internal_set_deviceModel)) ::StringW deviceModel;

  /// @brief Field deviceType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceType, put = __cordl_internal_set_deviceType)) ::UnityEngine::DeviceType deviceType;

  /// @brief Field gpuName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuName, put = __cordl_internal_set_gpuName)) ::StringW gpuName;

  /// @brief Field gpuVendor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gpuVendor, put = __cordl_internal_set_gpuVendor)) ::StringW gpuVendor;

  /// @brief Field graphicsDeviceType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_graphicsDeviceType, put = __cordl_internal_set_graphicsDeviceType)) ::UnityEngine::Rendering::GraphicsDeviceType graphicsDeviceType;

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_deviceModel() const;

  constexpr ::StringW& __cordl_internal_get_deviceModel();

  constexpr ::UnityEngine::DeviceType const& __cordl_internal_get_deviceType() const;

  constexpr ::UnityEngine::DeviceType& __cordl_internal_get_deviceType();

  constexpr ::StringW const& __cordl_internal_get_gpuName() const;

  constexpr ::StringW& __cordl_internal_get_gpuName();

  constexpr ::StringW const& __cordl_internal_get_gpuVendor() const;

  constexpr ::StringW& __cordl_internal_get_gpuVendor();

  constexpr ::UnityEngine::Rendering::GraphicsDeviceType const& __cordl_internal_get_graphicsDeviceType() const;

  constexpr ::UnityEngine::Rendering::GraphicsDeviceType& __cordl_internal_get_graphicsDeviceType();

  constexpr void __cordl_internal_set_deviceModel(::StringW value);

  constexpr void __cordl_internal_set_deviceType(::UnityEngine::DeviceType value);

  constexpr void __cordl_internal_set_gpuName(::StringW value);

  constexpr void __cordl_internal_set_gpuVendor(::StringW value);

  constexpr void __cordl_internal_set_graphicsDeviceType(::UnityEngine::Rendering::GraphicsDeviceType value);

  /// @brief Method .ctor, addr 0x6bf3138, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMessageHandler_AnalyticsPayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_AnalyticsPayload", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugMessageHandler_AnalyticsPayload(DebugMessageHandler_AnalyticsPayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler_AnalyticsPayload", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugMessageHandler_AnalyticsPayload(DebugMessageHandler_AnalyticsPayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9277 };

  /// @brief Field graphicsDeviceType, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::GraphicsDeviceType ___graphicsDeviceType;

  /// @brief Field deviceType, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::DeviceType ___deviceType;

  /// @brief Field deviceModel, offset: 0x20, size: 0x8, def value: None
  ::StringW ___deviceModel;

  /// @brief Field gpuVendor, offset: 0x28, size: 0x8, def value: None
  ::StringW ___gpuVendor;

  /// @brief Field gpuName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___gpuName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload, ___graphicsDeviceType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload, ___deviceType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload, ___deviceModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload, ___gpuVendor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload, ___gpuName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Guid, UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.DebugMessageHandler
class CORDL_TYPE DebugMessageHandler : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using AnalyticsPayload = ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_AnalyticsPayload;

  using DebugDataPayload = ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_DebugDataPayload;

  using IPayload = ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload;

  using MessageType = ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType;

  /// @brief Field m_UserCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserCallback,
                      put = __cordl_internal_set_m_UserCallback)) ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* m_UserCallback;

  /// @brief Field s_EditorToPlayerGuid, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_EditorToPlayerGuid, put = setStaticF_s_EditorToPlayerGuid)) ::System::Guid s_EditorToPlayerGuid;

  /// @brief Field s_PlayerToEditorGuid, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_PlayerToEditorGuid, put = setStaticF_s_PlayerToEditorGuid)) ::System::Guid s_PlayerToEditorGuid;

  /// @brief Method DeserializeMessage, addr 0x6bf22d4, size 0x5c0, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>
  DeserializeMessage(::ArrayW<uint8_t> data);

  /// @brief Method InternalCallback, addr 0x6bf223c, size 0x98, virtual false, abstract: false, final false
  inline void InternalCallback(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* msg);

  static inline ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler* New_ctor();

  /// @brief Method Register, addr 0x6bf2894, size 0xe8, virtual false, abstract: false, final false
  inline void
  Register(::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* callback);

  /// @brief Method Send, addr 0x6bf2a5c, size 0xa4, virtual false, abstract: false, final false
  inline void Send(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType messageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* payload);

  /// @brief Method SerializeMessage, addr 0x6bf2b00, size 0x598, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> SerializeMessage(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType type,
                                                   ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload* payload);

  /// @brief Method UnregisterAll, addr 0x6bf297c, size 0xe0, virtual false, abstract: false, final false
  inline void UnregisterAll();

  constexpr ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* const&
  __cordl_internal_get_m_UserCallback() const;

  constexpr ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>*&
  __cordl_internal_get_m_UserCallback();

  constexpr void __cordl_internal_set_m_UserCallback(
      ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* value);

  /// @brief Method .ctor, addr 0x6bf31b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Guid getStaticF_s_EditorToPlayerGuid();

  static inline ::System::Guid getStaticF_s_PlayerToEditorGuid();

  static inline void setStaticF_s_EditorToPlayerGuid(::System::Guid value);

  static inline void setStaticF_s_PlayerToEditorGuid(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMessageHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugMessageHandler(DebugMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugMessageHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugMessageHandler(DebugMessageHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9278 };

  /// @brief Field k_Version offset 0xffffffff size 0x4
  static constexpr int32_t k_Version{ static_cast<int32_t>(0x1) };

  /// @brief Field m_UserCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_MessageType, ::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler_IPayload*>* ___m_UserCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler, ___m_UserCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::DebugMessageHandler) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule

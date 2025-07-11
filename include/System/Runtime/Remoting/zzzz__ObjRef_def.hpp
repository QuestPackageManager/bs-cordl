#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ObjRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjRef)
namespace System::Runtime::Remoting {
class IChannelInfo;
}
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ObjRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ObjRef);
// Dependencies System.Object, System.Runtime.Serialization.IObjectReference, System.Runtime.Serialization.ISerializable
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.ObjRef
class CORDL_TYPE ObjRef : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChannelInfo)) ::System::Runtime::Remoting::IChannelInfo* ChannelInfo;

  __declspec(property(get = get_EnvoyInfo, put = set_EnvoyInfo)) ::System::Runtime::Remoting::IEnvoyInfo* EnvoyInfo;

  __declspec(property(get = get_IsReferenceToWellKnow)) bool IsReferenceToWellKnow;

  /// @brief Field MarshalledObjectRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MarshalledObjectRef, put = setStaticF_MarshalledObjectRef)) int32_t MarshalledObjectRef;

  __declspec(property(get = get_ServerType)) ::System::Type* ServerType;

  __declspec(property(get = get_TypeInfo, put = set_TypeInfo)) ::System::Runtime::Remoting::IRemotingTypeInfo* TypeInfo;

  __declspec(property(get = get_URI, put = set_URI)) ::StringW URI;

  /// @brief Field WellKnowObjectRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_WellKnowObjectRef, put = setStaticF_WellKnowObjectRef)) int32_t WellKnowObjectRef;

  /// @brief Field _serverType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__serverType, put = __cordl_internal_set__serverType)) ::System::Type* _serverType;

  /// @brief Field channel_info, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_channel_info, put = __cordl_internal_set_channel_info)) ::System::Runtime::Remoting::IChannelInfo* channel_info;

  /// @brief Field envoyInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_envoyInfo, put = __cordl_internal_set_envoyInfo)) ::System::Runtime::Remoting::IEnvoyInfo* envoyInfo;

  /// @brief Field flags, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) int32_t flags;

  /// @brief Field typeInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInfo, put = __cordl_internal_set_typeInfo)) ::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo;

  /// @brief Field uri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::StringW uri;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method DeserializeInTheCurrentDomain, addr 0x3cc7a08, size 0x124, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(int32_t domainId, ::ArrayW<uint8_t, ::Array<uint8_t>*> tInfo);

  /// @brief Method GetObjectData, addr 0x3cc8264, size 0x1d8, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject, addr 0x3cc843c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor();

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData);

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo);

  /// @brief Method SerializeType, addr 0x3cc7b2c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeType();

  /// @brief Method UpdateChannelInfo, addr 0x3cc7988, size 0x54, virtual false, abstract: false, final false
  inline void UpdateChannelInfo();

  constexpr ::System::Type* const& __cordl_internal_get__serverType() const;

  constexpr ::System::Type*& __cordl_internal_get__serverType();

  constexpr ::System::Runtime::Remoting::IChannelInfo* const& __cordl_internal_get_channel_info() const;

  constexpr ::System::Runtime::Remoting::IChannelInfo*& __cordl_internal_get_channel_info();

  constexpr ::System::Runtime::Remoting::IEnvoyInfo* const& __cordl_internal_get_envoyInfo() const;

  constexpr ::System::Runtime::Remoting::IEnvoyInfo*& __cordl_internal_get_envoyInfo();

  constexpr int32_t const& __cordl_internal_get_flags() const;

  constexpr int32_t& __cordl_internal_get_flags();

  constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* const& __cordl_internal_get_typeInfo() const;

  constexpr ::System::Runtime::Remoting::IRemotingTypeInfo*& __cordl_internal_get_typeInfo();

  constexpr ::StringW const& __cordl_internal_get_uri() const;

  constexpr ::StringW& __cordl_internal_get_uri();

  constexpr void __cordl_internal_set__serverType(::System::Type* value);

  constexpr void __cordl_internal_set_channel_info(::System::Runtime::Remoting::IChannelInfo* value);

  constexpr void __cordl_internal_set_envoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value);

  constexpr void __cordl_internal_set_flags(int32_t value);

  constexpr void __cordl_internal_set_typeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value);

  constexpr void __cordl_internal_set_uri(::StringW value);

  /// @brief Method .ctor, addr 0x3cc796c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cc7c98, size 0x52c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cc7ba4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData);

  /// @brief Method .ctor, addr 0x3cc79dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo);

  static inline int32_t getStaticF_MarshalledObjectRef();

  static inline int32_t getStaticF_WellKnowObjectRef();

  /// @brief Method get_ChannelInfo, addr 0x3cc822c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::IChannelInfo* get_ChannelInfo();

  /// @brief Method get_EnvoyInfo, addr 0x3cc8234, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo();

  /// @brief Method get_IsReferenceToWellKnow, addr 0x3cc81c4, size 0x68, virtual false, abstract: false, final false
  inline bool get_IsReferenceToWellKnow();

  /// @brief Method get_ServerType, addr 0x3cc84e4, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Type* get_ServerType();

  /// @brief Method get_TypeInfo, addr 0x3cc8244, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo();

  /// @brief Method get_URI, addr 0x3cc8254, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_URI();

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_MarshalledObjectRef(int32_t value);

  static inline void setStaticF_WellKnowObjectRef(int32_t value);

  /// @brief Method set_EnvoyInfo, addr 0x3cc823c, size 0x8, virtual true, abstract: false, final false
  inline void set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value);

  /// @brief Method set_TypeInfo, addr 0x3cc824c, size 0x8, virtual true, abstract: false, final false
  inline void set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value);

  /// @brief Method set_URI, addr 0x3cc825c, size 0x8, virtual true, abstract: false, final false
  inline void set_URI(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjRef(ObjRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjRef(ObjRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3062 };

  /// @brief Field channel_info, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::IChannelInfo* ___channel_info;

  /// @brief Field uri, offset: 0x18, size: 0x8, def value: None
  ::StringW ___uri;

  /// @brief Field typeInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::IRemotingTypeInfo* ___typeInfo;

  /// @brief Field envoyInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::IEnvoyInfo* ___envoyInfo;

  /// @brief Field flags, offset: 0x30, size: 0x4, def value: None
  int32_t ___flags;

  /// @brief Field _serverType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____serverType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ___channel_info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ___uri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ___typeInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ___envoyInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ___flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ObjRef, ____serverType) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ObjRef, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ObjRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ObjRef*, "System.Runtime.Remoting", "ObjRef");

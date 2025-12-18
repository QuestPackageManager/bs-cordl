#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLError)
namespace OculusStudios::GraphQL::Client {
class GraphQLErrorException;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLError;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLError);
// Dependencies System.Nullable`1<T>, System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLError
class CORDL_TYPE GraphQLError : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_APIErrorCode, put = set_APIErrorCode)) ::System::Nullable_1<int32_t> APIErrorCode;

  __declspec(property(get = get_AllowUserRetry, put = set_AllowUserRetry)) bool AllowUserRetry;

  __declspec(property(get = get_Code, put = set_Code)) ::System::Nullable_1<int32_t> Code;

  __declspec(property(get = get_DebugInfo, put = set_DebugInfo)) ::StringW DebugInfo;

  __declspec(property(get = get_Description, put = set_Description)) ::StringW Description;

  __declspec(property(get = get_Exception, put = set_Exception)) ::OculusStudios::GraphQL::Client::GraphQLErrorException* Exception;

  __declspec(property(get = get_FBTraceId, put = set_FBTraceId)) ::StringW FBTraceId;

  __declspec(property(get = get_IsSilent, put = set_IsSilent)) bool IsSilent;

  __declspec(property(get = get_IsTransient, put = set_IsTransient)) bool IsTransient;

  __declspec(property(get = get_Message, put = set_Message)) ::StringW Message;

  __declspec(property(get = get_QueryPath, put = set_QueryPath)) ::StringW QueryPath;

  __declspec(property(get = get_RequiresReauth, put = set_RequiresReauth)) bool RequiresReauth;

  __declspec(property(get = get_Severity, put = set_Severity)) ::StringW Severity;

  __declspec(property(get = get_Summary, put = set_Summary)) ::StringW Summary;

  __declspec(property(get = get_Type, put = set_Type)) ::StringW Type;

  /// @brief Field <APIErrorCode>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__APIErrorCode_k__BackingField, put = __cordl_internal_set__APIErrorCode_k__BackingField)) ::System::Nullable_1<int32_t> _APIErrorCode_k__BackingField;

  /// @brief Field <AllowUserRetry>k__BackingField, offset 0x53, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowUserRetry_k__BackingField, put = __cordl_internal_set__AllowUserRetry_k__BackingField)) bool _AllowUserRetry_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField)) ::System::Nullable_1<int32_t> _Code_k__BackingField;

  /// @brief Field <DebugInfo>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__DebugInfo_k__BackingField, put = __cordl_internal_set__DebugInfo_k__BackingField)) ::StringW _DebugInfo_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Description_k__BackingField, put = __cordl_internal_set__Description_k__BackingField)) ::StringW _Description_k__BackingField;

  /// @brief Field <Exception>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__Exception_k__BackingField,
                      put = __cordl_internal_set__Exception_k__BackingField)) ::OculusStudios::GraphQL::Client::GraphQLErrorException* _Exception_k__BackingField;

  /// @brief Field <FBTraceId>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__FBTraceId_k__BackingField, put = __cordl_internal_set__FBTraceId_k__BackingField)) ::StringW _FBTraceId_k__BackingField;

  /// @brief Field <IsSilent>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__IsSilent_k__BackingField, put = __cordl_internal_set__IsSilent_k__BackingField)) bool _IsSilent_k__BackingField;

  /// @brief Field <IsTransient>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__IsTransient_k__BackingField, put = __cordl_internal_set__IsTransient_k__BackingField)) bool _IsTransient_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField)) ::StringW _Message_k__BackingField;

  /// @brief Field <QueryPath>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryPath_k__BackingField, put = __cordl_internal_set__QueryPath_k__BackingField)) ::StringW _QueryPath_k__BackingField;

  /// @brief Field <RequiresReauth>k__BackingField, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__RequiresReauth_k__BackingField, put = __cordl_internal_set__RequiresReauth_k__BackingField)) bool _RequiresReauth_k__BackingField;

  /// @brief Field <Severity>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Severity_k__BackingField, put = __cordl_internal_set__Severity_k__BackingField)) ::StringW _Severity_k__BackingField;

  /// @brief Field <Summary>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Summary_k__BackingField, put = __cordl_internal_set__Summary_k__BackingField)) ::StringW _Summary_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::StringW _Type_k__BackingField;

  static inline ::OculusStudios::GraphQL::Client::GraphQLError* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__APIErrorCode_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__APIErrorCode_k__BackingField();

  constexpr bool const& __cordl_internal_get__AllowUserRetry_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowUserRetry_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__Code_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DebugInfo_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DebugInfo_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Description_k__BackingField();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLErrorException* const& __cordl_internal_get__Exception_k__BackingField() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLErrorException*& __cordl_internal_get__Exception_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FBTraceId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FBTraceId_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsSilent_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsSilent_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsTransient_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsTransient_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__QueryPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__QueryPath_k__BackingField();

  constexpr bool const& __cordl_internal_get__RequiresReauth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RequiresReauth_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Severity_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Severity_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Summary_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Summary_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__APIErrorCode_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__AllowUserRetry_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Code_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__DebugInfo_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Exception_k__BackingField(::OculusStudios::GraphQL::Client::GraphQLErrorException* value);

  constexpr void __cordl_internal_set__FBTraceId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsSilent_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsTransient_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RequiresReauth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Severity_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Summary_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x5d73564, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_APIErrorCode, addr 0x5d734b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_APIErrorCode();

  /// @brief Method get_AllowUserRetry, addr 0x5d73524, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowUserRetry();

  /// @brief Method get_Code, addr 0x5d734a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_Code();

  /// @brief Method get_DebugInfo, addr 0x5d734e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DebugInfo();

  /// @brief Method get_Description, addr 0x5d734d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Exception, addr 0x5d73554, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::GraphQLErrorException* get_Exception();

  /// @brief Method get_FBTraceId, addr 0x5d73544, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FBTraceId();

  /// @brief Method get_IsSilent, addr 0x5d734f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsSilent();

  /// @brief Method get_IsTransient, addr 0x5d73504, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTransient();

  /// @brief Method get_Message, addr 0x5d73474, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_QueryPath, addr 0x5d73534, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_QueryPath();

  /// @brief Method get_RequiresReauth, addr 0x5d73514, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequiresReauth();

  /// @brief Method get_Severity, addr 0x5d73484, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Severity();

  /// @brief Method get_Summary, addr 0x5d734c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Summary();

  /// @brief Method get_Type, addr 0x5d73494, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_APIErrorCode, addr 0x5d734bc, size 0x8, virtual false, abstract: false, final false
  inline void set_APIErrorCode(::System::Nullable_1<int32_t> value);

  /// @brief Method set_AllowUserRetry, addr 0x5d7352c, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowUserRetry(bool value);

  /// @brief Method set_Code, addr 0x5d734ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::System::Nullable_1<int32_t> value);

  /// @brief Method set_DebugInfo, addr 0x5d734ec, size 0x8, virtual false, abstract: false, final false
  inline void set_DebugInfo(::StringW value);

  /// @brief Method set_Description, addr 0x5d734dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Exception, addr 0x5d7355c, size 0x8, virtual false, abstract: false, final false
  inline void set_Exception(::OculusStudios::GraphQL::Client::GraphQLErrorException* value);

  /// @brief Method set_FBTraceId, addr 0x5d7354c, size 0x8, virtual false, abstract: false, final false
  inline void set_FBTraceId(::StringW value);

  /// @brief Method set_IsSilent, addr 0x5d734fc, size 0x8, virtual false, abstract: false, final false
  inline void set_IsSilent(bool value);

  /// @brief Method set_IsTransient, addr 0x5d7350c, size 0x8, virtual false, abstract: false, final false
  inline void set_IsTransient(bool value);

  /// @brief Method set_Message, addr 0x5d7347c, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_QueryPath, addr 0x5d7353c, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryPath(::StringW value);

  /// @brief Method set_RequiresReauth, addr 0x5d7351c, size 0x8, virtual false, abstract: false, final false
  inline void set_RequiresReauth(bool value);

  /// @brief Method set_Severity, addr 0x5d7348c, size 0x8, virtual false, abstract: false, final false
  inline void set_Severity(::StringW value);

  /// @brief Method set_Summary, addr 0x5d734cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Summary(::StringW value);

  /// @brief Method set_Type, addr 0x5d7349c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLError(GraphQLError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLError(GraphQLError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20154 };

  /// @brief Field <Message>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <Severity>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Severity_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <Code>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____Code_k__BackingField;

  /// @brief Field <APIErrorCode>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____APIErrorCode_k__BackingField;

  /// @brief Field <Summary>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Summary_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief Field <DebugInfo>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____DebugInfo_k__BackingField;

  /// @brief Field <IsSilent>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____IsSilent_k__BackingField;

  /// @brief Field <IsTransient>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____IsTransient_k__BackingField;

  /// @brief Field <RequiresReauth>k__BackingField, offset: 0x52, size: 0x1, def value: None
  bool ____RequiresReauth_k__BackingField;

  /// @brief Field <AllowUserRetry>k__BackingField, offset: 0x53, size: 0x1, def value: None
  bool ____AllowUserRetry_k__BackingField;

  /// @brief Field <QueryPath>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____QueryPath_k__BackingField;

  /// @brief Field <FBTraceId>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____FBTraceId_k__BackingField;

  /// @brief Field <Exception>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLErrorException* ____Exception_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Message_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Severity_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Code_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____APIErrorCode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Summary_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Description_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____DebugInfo_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____IsSilent_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____IsTransient_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____RequiresReauth_k__BackingField) == 0x52, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____AllowUserRetry_k__BackingField) == 0x53, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____QueryPath_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____FBTraceId_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLError, ____Exception_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLError, 0x70>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLError);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLError*, "OculusStudios.GraphQL.Client", "GraphQLError");

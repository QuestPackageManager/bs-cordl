#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLResponseStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLResponseStream)
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream___c;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponse;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream___c;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLResponseStream);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLResponseStream___c);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLResponseStream/<>c
class CORDL_TYPE GraphQLResponseStream___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0)) ::System::Action* __9__21_0;

  static inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* New_ctor();

  /// @brief Method <.ctor>b__21_0, addr 0x5d17164, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__21_0();

  /// @brief Method .ctor, addr 0x5d17160, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__21_0();

  static inline void setStaticF___9(::OculusStudios::GraphQL::Client::GraphQLResponseStream___c* value);

  static inline void setStaticF___9__21_0(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLResponseStream___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseStream___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLResponseStream___c(GraphQLResponseStream___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseStream___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLResponseStream___c(GraphQLResponseStream___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20301 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLResponseStream___c, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLResponseStream
class CORDL_TYPE GraphQLResponseStream : public ::System::Object {
public:
  // Declarations
  using __c = ::OculusStudios::GraphQL::Client::GraphQLResponseStream___c;

  __declspec(property(get = get_InitialResponse, put = set_InitialResponse)) ::OculusStudios::GraphQL::Client::GraphQLResponse* InitialResponse;

  /// @brief Field OnCancelled, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_OnCancelled, put = __cordl_internal_set_OnCancelled)) ::System::Action* OnCancelled;

  /// @brief Field OnConnectionClosed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OnConnectionClosed, put = __cordl_internal_set_OnConnectionClosed)) ::System::Action* OnConnectionClosed;

  /// @brief Field <InitialResponse>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__InitialResponse_k__BackingField,
                      put = __cordl_internal_set__InitialResponse_k__BackingField)) ::OculusStudios::GraphQL::Client::GraphQLResponse* _InitialResponse_k__BackingField;

  /// @brief Field _responseCallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__responseCallback,
                      put = __cordl_internal_set__responseCallback)) ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* _responseCallback;

  /// @brief Field _responseCallbackSync, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__responseCallbackSync,
                      put = __cordl_internal_set__responseCallbackSync)) ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* _responseCallbackSync;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Cancel, addr 0x5d17060, size 0x1c, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Dispose, addr 0x5d17030, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x5d17040, size 0x20, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::OculusStudios::GraphQL::Client::GraphQLResponseStream* New_ctor();

  /// @brief Method NoteConnectionClosed, addr 0x5d170ec, size 0x20, virtual false, abstract: false, final false
  inline void NoteConnectionClosed();

  /// @brief Method PostResponse, addr 0x5d0fb9c, size 0xbc, virtual false, abstract: false, final false
  inline void PostResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* response);

  /// @brief Method SetResponseCallback, addr 0x5d1708c, size 0x30, virtual false, abstract: false, final false
  inline void SetResponseCallback(::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* callback);

  /// @brief Method SetResponseCallback, addr 0x5d170bc, size 0x30, virtual false, abstract: false, final false
  inline void SetResponseCallback(::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* callback);

  constexpr ::System::Action* const& __cordl_internal_get_OnCancelled() const;

  constexpr ::System::Action*& __cordl_internal_get_OnCancelled();

  constexpr ::System::Action* const& __cordl_internal_get_OnConnectionClosed() const;

  constexpr ::System::Action*& __cordl_internal_get_OnConnectionClosed();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse* const& __cordl_internal_get__InitialResponse_k__BackingField() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse*& __cordl_internal_get__InitialResponse_k__BackingField();

  constexpr ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* const& __cordl_internal_get__responseCallback() const;

  constexpr ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>*& __cordl_internal_get__responseCallback();

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* const& __cordl_internal_get__responseCallbackSync() const;

  constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>*& __cordl_internal_get__responseCallbackSync();

  constexpr void __cordl_internal_set_OnCancelled(::System::Action* value);

  constexpr void __cordl_internal_set_OnConnectionClosed(::System::Action* value);

  constexpr void __cordl_internal_set__InitialResponse_k__BackingField(::OculusStudios::GraphQL::Client::GraphQLResponse* value);

  constexpr void __cordl_internal_set__responseCallback(::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* value);

  constexpr void __cordl_internal_set__responseCallbackSync(::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* value);

  /// @brief Method .ctor, addr 0x5d0ffdc, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnCancelled, addr 0x5d11d7c, size 0xac, virtual false, abstract: false, final false
  inline void add_OnCancelled(::System::Action* value);

  /// @brief Method add_OnConnectionClosed, addr 0x5d16ed8, size 0xac, virtual false, abstract: false, final false
  inline void add_OnConnectionClosed(::System::Action* value);

  /// @brief Method get_InitialResponse, addr 0x5d1707c, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::GraphQLResponse* get_InitialResponse();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_OnCancelled, addr 0x5d16e2c, size 0xac, virtual false, abstract: false, final false
  inline void remove_OnCancelled(::System::Action* value);

  /// @brief Method remove_OnConnectionClosed, addr 0x5d16f84, size 0xac, virtual false, abstract: false, final false
  inline void remove_OnConnectionClosed(::System::Action* value);

  /// @brief Method set_InitialResponse, addr 0x5d17084, size 0x8, virtual false, abstract: false, final false
  inline void set_InitialResponse(::OculusStudios::GraphQL::Client::GraphQLResponse* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLResponseStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLResponseStream(GraphQLResponseStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponseStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLResponseStream(GraphQLResponseStream const&) = delete;

  /// @brief Field INITIAL offset 0xffffffff size 0x8
  static constexpr ::ConstString INITIAL{ u"Initial" };

  /// @brief Field UPDATED offset 0xffffffff size 0x8
  static constexpr ::ConstString UPDATED{ u"Updated" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20302 };

  /// @brief Field OnCancelled, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___OnCancelled;

  /// @brief Field OnConnectionClosed, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___OnConnectionClosed;

  /// @brief Field _responseCallbackSync, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::OculusStudios::GraphQL::Client::GraphQLResponse*>* ____responseCallbackSync;

  /// @brief Field _responseCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::OculusStudios::GraphQL::Client::GraphQLResponse*, ::System::Threading::Tasks::Task*>* ____responseCallback;

  /// @brief Field <InitialResponse>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponse* ____InitialResponse_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponseStream, ___OnCancelled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponseStream, ___OnConnectionClosed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponseStream, ____responseCallbackSync) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponseStream, ____responseCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponseStream, ____InitialResponse_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLResponseStream, 0x38>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLResponseStream);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLResponseStream*, "OculusStudios.GraphQL.Client", "GraphQLResponseStream");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLResponseStream___c);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLResponseStream___c*, "OculusStudios.GraphQL.Client", "GraphQLResponseStream/<>c");

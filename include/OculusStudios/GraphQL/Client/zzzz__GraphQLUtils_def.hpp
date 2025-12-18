#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLUtils)
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLUtils__DeserializeAsync_d__6_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLUtils___c__DisplayClass6_0_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLUtils;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLUtils___c__DisplayClass6_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLUtils__DeserializeAsync_d__6_1;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLUtils);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLUtils/<>c__DisplayClass6_0`1<T>
class CORDL_TYPE GraphQLUtils___c__DisplayClass6_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  static inline ::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>* New_ctor();

  /// @brief Method <DeserializeAsync>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _DeserializeAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLUtils___c__DisplayClass6_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLUtils___c__DisplayClass6_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLUtils___c__DisplayClass6_0_1(GraphQLUtils___c__DisplayClass6_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLUtils___c__DisplayClass6_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLUtils___c__DisplayClass6_0_1(GraphQLUtils___c__DisplayClass6_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20168 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLUtils/<DeserializeAsync>d__6`1<T>
struct CORDL_TYPE GraphQLUtils__DeserializeAsync_d__6_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLUtils__DeserializeAsync_d__6_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<T>", modifiers: "", def_value: None }]
  constexpr GraphQLUtils__DeserializeAsync_d__6_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::StringW data,
                                                  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<T> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW data;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<T> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLUtils
class CORDL_TYPE GraphQLUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using _DeserializeAsync_d__6_1 = ::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>;

  template <typename T> using __c__DisplayClass6_0_1 = ::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>;

  /// @brief Method Convert4Json, addr 0x5d73834, size 0x824, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* Convert4Json(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* inDict);

  /// @brief Method ConvertObject2Json, addr 0x5d743f8, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertObject2Json(::System::Object* item);

  /// @brief Method ConvertString2Enum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* ConvertString2Enum(::System::Collections::Generic::List_1<::StringW>* strList);

  /// @brief Method ConvertString2Enum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ConvertString2Enum(::StringW str);

  /// @brief Method DeserializeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Threading::Tasks::Task_1<T>* DeserializeAsync(::StringW data);

  /// @brief Method IsUnknown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsUnknown(T enumValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLUtils(GraphQLUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLUtils(GraphQLUtils const&) = delete;

  /// @brief Field UNKNOWN_ENUM_VALUE offset 0xffffffff size 0x8
  static constexpr ::ConstString UNKNOWN_ENUM_VALUE{ u"__UnknownValue" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLUtils, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLUtils);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLUtils*, "OculusStudios.GraphQL.Client", "GraphQLUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1, "OculusStudios.GraphQL.Client", "GraphQLUtils/<>c__DisplayClass6_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1, "OculusStudios.GraphQL.Client", "GraphQLUtils/<DeserializeAsync>d__6`1");

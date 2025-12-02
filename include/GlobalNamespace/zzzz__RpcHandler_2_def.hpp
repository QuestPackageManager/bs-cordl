#pragma once
// IWYU pragma private; include "GlobalNamespace/RpcHandler_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RpcHandler_2)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template <typename TMessageType> class IMultiplayerSessionMessageProcessor_1;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass11_0_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0> class RpcHandler_2___c__DisplayClass12_0_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1> class RpcHandler_2___c__DisplayClass13_0_3;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_2___c__DisplayClass14_0_4;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_2___c__DisplayClass15_0_5;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass16_0_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0> class RpcHandler_2___c__DisplayClass17_0_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1> class RpcHandler_2___c__DisplayClass18_0_3;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_2___c__DisplayClass19_0_4;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_2___c__DisplayClass20_0_5;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass21_0_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TMessageType, typename TType> class RpcHandler_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass11_0_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0> class RpcHandler_2___c__DisplayClass12_0_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1> class RpcHandler_2___c__DisplayClass13_0_3;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_2___c__DisplayClass14_0_4;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_2___c__DisplayClass15_0_5;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass16_0_1;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0> class RpcHandler_2___c__DisplayClass17_0_2;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1> class RpcHandler_2___c__DisplayClass18_0_3;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_2___c__DisplayClass19_0_4;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_2___c__DisplayClass20_0_5;
}
namespace GlobalNamespace {
template <typename TMessageType, typename TType, typename T> class RpcHandler_2___c__DisplayClass21_0_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass11_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass12_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass13_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass14_0_4);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass15_0_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass16_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass17_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass18_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass19_0_4);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass20_0_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_2___c__DisplayClass21_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass11_0`1<TMessageType,TType,T>
class CORDL_TYPE RpcHandler_2___c__DisplayClass11_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<::StringW>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass11_0_1<TMessageType, TType, T>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass11_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass11_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass11_0_1(RpcHandler_2___c__DisplayClass11_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass11_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass11_0_1(RpcHandler_2___c__DisplayClass11_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18219 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass12_0`2<TMessageType,TType,T,T0>
class CORDL_TYPE RpcHandler_2___c__DisplayClass12_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::StringW, T0>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass12_0_2<TMessageType, TType, T, T0>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_2<::StringW, T0>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_2<::StringW, T0>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_2<::StringW, T0>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass12_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass12_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass12_0_2(RpcHandler_2___c__DisplayClass12_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass12_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass12_0_2(RpcHandler_2___c__DisplayClass12_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18220 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, T0>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass13_0`3<TMessageType,TType,T,T0,T1>
class CORDL_TYPE RpcHandler_2___c__DisplayClass13_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_3<::StringW, T0, T1>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass13_0_3<TMessageType, TType, T, T0, T1>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_3<::StringW, T0, T1>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_3<::StringW, T0, T1>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_3<::StringW, T0, T1>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass13_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass13_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass13_0_3(RpcHandler_2___c__DisplayClass13_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass13_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass13_0_3(RpcHandler_2___c__DisplayClass13_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18221 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<::StringW, T0, T1>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass14_0`4<TMessageType,TType,T,T0,T1,T2>
class CORDL_TYPE RpcHandler_2___c__DisplayClass14_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_4<::StringW, T0, T1, T2>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass14_0_4<TMessageType, TType, T, T0, T1, T2>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_4<::StringW, T0, T1, T2>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_4<::StringW, T0, T1, T2>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_4<::StringW, T0, T1, T2>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass14_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass14_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass14_0_4(RpcHandler_2___c__DisplayClass14_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass14_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass14_0_4(RpcHandler_2___c__DisplayClass14_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18222 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::StringW, T0, T1, T2>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass15_0`5<TMessageType,TType,T,T0,T1,T2,T3>
class CORDL_TYPE RpcHandler_2___c__DisplayClass15_0_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_5<::StringW, T0, T1, T2, T3>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass15_0_5<TMessageType, TType, T, T0, T1, T2, T3>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_5<::StringW, T0, T1, T2, T3>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_5<::StringW, T0, T1, T2, T3>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_5<::StringW, T0, T1, T2, T3>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass15_0_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass15_0_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass15_0_5(RpcHandler_2___c__DisplayClass15_0_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass15_0_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass15_0_5(RpcHandler_2___c__DisplayClass15_0_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18223 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_5<::StringW, T0, T1, T2, T3>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass16_0`1<TMessageType,TType,T>
class CORDL_TYPE RpcHandler_2___c__DisplayClass16_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::StringW, int64_t>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass16_0_1<TMessageType, TType, T>* New_ctor();

  /// @brief Method <RegisterCallbackWithTime>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_2<::StringW, int64_t>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_2<::StringW, int64_t>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass16_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass16_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass16_0_1(RpcHandler_2___c__DisplayClass16_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass16_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass16_0_1(RpcHandler_2___c__DisplayClass16_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18224 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass17_0`2<TMessageType,TType,T,T0>
class CORDL_TYPE RpcHandler_2___c__DisplayClass17_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_3<::StringW, int64_t, T0>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass17_0_2<TMessageType, TType, T, T0>* New_ctor();

  /// @brief Method <RegisterCallbackWithTime>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_3<::StringW, int64_t, T0>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_3<::StringW, int64_t, T0>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_3<::StringW, int64_t, T0>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass17_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass17_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass17_0_2(RpcHandler_2___c__DisplayClass17_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass17_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass17_0_2(RpcHandler_2___c__DisplayClass17_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18225 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<::StringW, int64_t, T0>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass18_0`3<TMessageType,TType,T,T0,T1>
class CORDL_TYPE RpcHandler_2___c__DisplayClass18_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_4<::StringW, int64_t, T0, T1>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass18_0_3<TMessageType, TType, T, T0, T1>* New_ctor();

  /// @brief Method <RegisterCallbackWithTime>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_4<::StringW, int64_t, T0, T1>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_4<::StringW, int64_t, T0, T1>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_4<::StringW, int64_t, T0, T1>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass18_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass18_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass18_0_3(RpcHandler_2___c__DisplayClass18_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass18_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass18_0_3(RpcHandler_2___c__DisplayClass18_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18226 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, T0, T1>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass19_0`4<TMessageType,TType,T,T0,T1,T2>
class CORDL_TYPE RpcHandler_2___c__DisplayClass19_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_5<::StringW, int64_t, T0, T1, T2>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass19_0_4<TMessageType, TType, T, T0, T1, T2>* New_ctor();

  /// @brief Method <RegisterCallbackWithTime>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_5<::StringW, int64_t, T0, T1, T2>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_5<::StringW, int64_t, T0, T1, T2>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_5<::StringW, int64_t, T0, T1, T2>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass19_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass19_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass19_0_4(RpcHandler_2___c__DisplayClass19_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass19_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass19_0_4(RpcHandler_2___c__DisplayClass19_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18227 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_5<::StringW, int64_t, T0, T1, T2>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass20_0`5<TMessageType,TType,T,T0,T1,T2,T3>
class CORDL_TYPE RpcHandler_2___c__DisplayClass20_0_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass20_0_5<TMessageType, TType, T, T0, T1, T2, T3>* New_ctor();

  /// @brief Method <RegisterCallbackWithTime>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallbackWithTime_b__0(::GlobalNamespace::IConnectedPlayer* player, T rpc);

  constexpr ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass20_0_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass20_0_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass20_0_5(RpcHandler_2___c__DisplayClass20_0_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass20_0_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass20_0_5(RpcHandler_2___c__DisplayClass20_0_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18228 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`2/<>c__DisplayClass21_0`1<TMessageType,TType,T>
class CORDL_TYPE RpcHandler_2___c__DisplayClass21_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* callback;

  static inline ::GlobalNamespace::RpcHandler_2___c__DisplayClass21_0_1<TMessageType, TType, T>* New_ctor();

  /// @brief Method <RegisterCallback>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _RegisterCallback_b__0(T rpc, ::GlobalNamespace::IConnectedPlayer* player);

  constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2___c__DisplayClass21_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass21_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2___c__DisplayClass21_0_1(RpcHandler_2___c__DisplayClass21_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2___c__DisplayClass21_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2___c__DisplayClass21_0_1(RpcHandler_2___c__DisplayClass21_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18229 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TMessageType, typename TType>
// Is value type: false
// CS Name: RpcHandler`2<TMessageType,TType>
class CORDL_TYPE RpcHandler_2 : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass11_0_1 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass11_0_1<TMessageType, TType, T>;

  template <typename T, typename T0> using __c__DisplayClass12_0_2 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass12_0_2<TMessageType, TType, T, T0>;

  template <typename T, typename T0, typename T1> using __c__DisplayClass13_0_3 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass13_0_3<TMessageType, TType, T, T0, T1>;

  template <typename T, typename T0, typename T1, typename T2> using __c__DisplayClass14_0_4 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass14_0_4<TMessageType, TType, T, T0, T1, T2>;

  template <typename T, typename T0, typename T1, typename T2, typename T3>
  using __c__DisplayClass15_0_5 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass15_0_5<TMessageType, TType, T, T0, T1, T2, T3>;

  template <typename T> using __c__DisplayClass16_0_1 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass16_0_1<TMessageType, TType, T>;

  template <typename T, typename T0> using __c__DisplayClass17_0_2 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass17_0_2<TMessageType, TType, T, T0>;

  template <typename T, typename T0, typename T1> using __c__DisplayClass18_0_3 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass18_0_3<TMessageType, TType, T, T0, T1>;

  template <typename T, typename T0, typename T1, typename T2> using __c__DisplayClass19_0_4 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass19_0_4<TMessageType, TType, T, T0, T1, T2>;

  template <typename T, typename T0, typename T1, typename T2, typename T3>
  using __c__DisplayClass20_0_5 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass20_0_5<TMessageType, TType, T, T0, T1, T2, T3>;

  template <typename T> using __c__DisplayClass21_0_1 = ::GlobalNamespace::RpcHandler_2___c__DisplayClass21_0_1<TMessageType, TType, T>;

  /// @brief Field _messageType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__messageType, put = __cordl_internal_set__messageType)) TMessageType _messageType;

  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _multiplayerSessionMessageProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionMessageProcessor,
                      put = __cordl_internal_set__multiplayerSessionMessageProcessor)) ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* _multiplayerSessionMessageProcessor;

  /// @brief Field _rpcSerializer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rpcSerializer,
                      put = __cordl_internal_set__rpcSerializer)) ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* _rpcSerializer;

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method EnqueueRpc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void EnqueueRpc();

  /// @brief Method EnqueueRpc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0> inline void EnqueueRpc(T0 value0);

  /// @brief Method EnqueueRpc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1> inline void EnqueueRpc(T0 value0, T1 value1);

  /// @brief Method EnqueueRpc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2> inline void EnqueueRpc(T0 value0, T1 value1, T2 value2);

  /// @brief Method EnqueueRpc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2, typename T3> inline void EnqueueRpc(T0 value0, T1 value1, T2 value2, T3 value3);

  static inline ::GlobalNamespace::RpcHandler_2<TMessageType, TType>* New_ctor(::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* multiplayerSessionMessageProcessor,
                                                                               ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, TMessageType messageType);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterCallback(TType type, ::System::Action_1<::StringW>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterCallback(TType type, ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0> inline void RegisterCallback(TType type, ::System::Action_2<::StringW, T0>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1> inline void RegisterCallback(TType type, ::System::Action_3<::StringW, T0, T1>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2> inline void RegisterCallback(TType type, ::System::Action_4<::StringW, T0, T1, T2>* callback);

  /// @brief Method RegisterCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2, typename T3> inline void RegisterCallback(TType type, ::System::Action_5<::StringW, T0, T1, T2, T3>* callback);

  /// @brief Method RegisterCallbackWithTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterCallbackWithTime(TType type, ::System::Action_2<::StringW, int64_t>* callback);

  /// @brief Method RegisterCallbackWithTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0> inline void RegisterCallbackWithTime(TType type, ::System::Action_3<::StringW, int64_t, T0>* callback);

  /// @brief Method RegisterCallbackWithTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1> inline void RegisterCallbackWithTime(TType type, ::System::Action_4<::StringW, int64_t, T0, T1>* callback);

  /// @brief Method RegisterCallbackWithTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2> inline void RegisterCallbackWithTime(TType type, ::System::Action_5<::StringW, int64_t, T0, T1, T2>* callback);

  /// @brief Method RegisterCallbackWithTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename T0, typename T1, typename T2, typename T3> inline void RegisterCallbackWithTime(TType type, ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* callback);

  constexpr TMessageType const& __cordl_internal_get__messageType() const;

  constexpr TMessageType& __cordl_internal_get__messageType();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* const& __cordl_internal_get__multiplayerSessionMessageProcessor() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>*& __cordl_internal_get__multiplayerSessionMessageProcessor();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get__rpcSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__rpcSerializer();

  constexpr void __cordl_internal_set__messageType(TMessageType value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__multiplayerSessionMessageProcessor(::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* value);

  constexpr void __cordl_internal_set__rpcSerializer(::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* multiplayerSessionMessageProcessor,
                    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, TMessageType messageType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_2(RpcHandler_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_2(RpcHandler_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18230 };

  /// @brief Field _multiplayerSessionMessageProcessor, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionMessageProcessor_1<TMessageType>* ____multiplayerSessionMessageProcessor;

  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcSerializer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* ____rpcSerializer;

  /// @brief Field _messageType, offset: 0x28, size: 0x8, def value: None
  TMessageType ____messageType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2, "", "RpcHandler`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass11_0_1, "", "RpcHandler`2/<>c__DisplayClass11_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass12_0_2, "", "RpcHandler`2/<>c__DisplayClass12_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass13_0_3, "", "RpcHandler`2/<>c__DisplayClass13_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass14_0_4, "", "RpcHandler`2/<>c__DisplayClass14_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass15_0_5, "", "RpcHandler`2/<>c__DisplayClass15_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass16_0_1, "", "RpcHandler`2/<>c__DisplayClass16_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass17_0_2, "", "RpcHandler`2/<>c__DisplayClass17_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass18_0_3, "", "RpcHandler`2/<>c__DisplayClass18_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass19_0_4, "", "RpcHandler`2/<>c__DisplayClass19_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass20_0_5, "", "RpcHandler`2/<>c__DisplayClass20_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_2___c__DisplayClass21_0_1, "", "RpcHandler`2/<>c__DisplayClass21_0`1");

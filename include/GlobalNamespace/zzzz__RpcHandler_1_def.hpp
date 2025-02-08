#pragma once
// IWYU pragma private; include "GlobalNamespace/RpcHandler_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RpcHandler_1)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerSessionManager_MessageType;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass10_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0> class RpcHandler_1___c__DisplayClass11_0_2;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1> class RpcHandler_1___c__DisplayClass12_0_3;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_1___c__DisplayClass13_0_4;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_1___c__DisplayClass14_0_5;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass15_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0> class RpcHandler_1___c__DisplayClass16_0_2;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1> class RpcHandler_1___c__DisplayClass17_0_3;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_1___c__DisplayClass18_0_4;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_1___c__DisplayClass19_0_5;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass20_0_1;
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
template <typename TType> class RpcHandler_1;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass10_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0> class RpcHandler_1___c__DisplayClass11_0_2;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1> class RpcHandler_1___c__DisplayClass12_0_3;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_1___c__DisplayClass13_0_4;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_1___c__DisplayClass14_0_5;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass15_0_1;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0> class RpcHandler_1___c__DisplayClass16_0_2;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1> class RpcHandler_1___c__DisplayClass17_0_3;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2> class RpcHandler_1___c__DisplayClass18_0_4;
}
namespace GlobalNamespace {
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3> class RpcHandler_1___c__DisplayClass19_0_5;
}
namespace GlobalNamespace {
template <typename TType, typename T> class RpcHandler_1___c__DisplayClass20_0_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass10_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass11_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass12_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass13_0_4);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass14_0_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass15_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass16_0_2);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass17_0_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass18_0_4);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass19_0_5);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RpcHandler_1___c__DisplayClass20_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass10_0`1<TType,T>
class CORDL_TYPE RpcHandler_1___c__DisplayClass10_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<::StringW>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass10_0_1<TType, T>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass10_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass10_0_1(RpcHandler_1___c__DisplayClass10_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass10_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass10_0_1(RpcHandler_1___c__DisplayClass10_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14951 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass11_0`2<TType,T,T0>
class CORDL_TYPE RpcHandler_1___c__DisplayClass11_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::StringW, T0>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass11_0_2<TType, T, T0>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass11_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass11_0_2(RpcHandler_1___c__DisplayClass11_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass11_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass11_0_2(RpcHandler_1___c__DisplayClass11_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14952 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, T0>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass12_0`3<TType,T,T0,T1>
class CORDL_TYPE RpcHandler_1___c__DisplayClass12_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_3<::StringW, T0, T1>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass12_0_3<TType, T, T0, T1>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass12_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass12_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass12_0_3(RpcHandler_1___c__DisplayClass12_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass12_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass12_0_3(RpcHandler_1___c__DisplayClass12_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14953 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<::StringW, T0, T1>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1, typename T2>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass13_0`4<TType,T,T0,T1,T2>
class CORDL_TYPE RpcHandler_1___c__DisplayClass13_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_4<::StringW, T0, T1, T2>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass13_0_4<TType, T, T0, T1, T2>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass13_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass13_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass13_0_4(RpcHandler_1___c__DisplayClass13_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass13_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass13_0_4(RpcHandler_1___c__DisplayClass13_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14954 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::StringW, T0, T1, T2>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass14_0`5<TType,T,T0,T1,T2,T3>
class CORDL_TYPE RpcHandler_1___c__DisplayClass14_0_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_5<::StringW, T0, T1, T2, T3>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass14_0_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass14_0_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass14_0_5(RpcHandler_1___c__DisplayClass14_0_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass14_0_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass14_0_5(RpcHandler_1___c__DisplayClass14_0_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14955 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_5<::StringW, T0, T1, T2, T3>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass15_0`1<TType,T>
class CORDL_TYPE RpcHandler_1___c__DisplayClass15_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::StringW, int64_t>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass15_0_1<TType, T>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass15_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass15_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass15_0_1(RpcHandler_1___c__DisplayClass15_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass15_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass15_0_1(RpcHandler_1___c__DisplayClass15_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14956 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass16_0`2<TType,T,T0>
class CORDL_TYPE RpcHandler_1___c__DisplayClass16_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_3<::StringW, int64_t, T0>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass16_0_2<TType, T, T0>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass16_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass16_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass16_0_2(RpcHandler_1___c__DisplayClass16_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass16_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass16_0_2(RpcHandler_1___c__DisplayClass16_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14957 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<::StringW, int64_t, T0>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass17_0`3<TType,T,T0,T1>
class CORDL_TYPE RpcHandler_1___c__DisplayClass17_0_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_4<::StringW, int64_t, T0, T1>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass17_0_3<TType, T, T0, T1>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass17_0_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass17_0_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass17_0_3(RpcHandler_1___c__DisplayClass17_0_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass17_0_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass17_0_3(RpcHandler_1___c__DisplayClass17_0_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14958 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, T0, T1>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1, typename T2>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass18_0`4<TType,T,T0,T1,T2>
class CORDL_TYPE RpcHandler_1___c__DisplayClass18_0_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_5<::StringW, int64_t, T0, T1, T2>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass18_0_4<TType, T, T0, T1, T2>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass18_0_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass18_0_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass18_0_4(RpcHandler_1___c__DisplayClass18_0_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass18_0_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass18_0_4(RpcHandler_1___c__DisplayClass18_0_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14959 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_5<::StringW, int64_t, T0, T1, T2>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T, typename T0, typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass19_0`5<TType,T,T0,T1,T2,T3>
class CORDL_TYPE RpcHandler_1___c__DisplayClass19_0_5 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass19_0_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass19_0_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass19_0_5(RpcHandler_1___c__DisplayClass19_0_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass19_0_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass19_0_5(RpcHandler_1___c__DisplayClass19_0_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14960 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_6<::StringW, int64_t, T0, T1, T2, T3>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType, typename T>
// Is value type: false
// CS Name: RpcHandler`1/<>c__DisplayClass20_0`1<TType,T>
class CORDL_TYPE RpcHandler_1___c__DisplayClass20_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* callback;

  static inline ::GlobalNamespace::RpcHandler_1___c__DisplayClass20_0_1<TType, T>* New_ctor();

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
  constexpr RpcHandler_1___c__DisplayClass20_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass20_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1___c__DisplayClass20_0_1(RpcHandler_1___c__DisplayClass20_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1___c__DisplayClass20_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1___c__DisplayClass20_0_1(RpcHandler_1___c__DisplayClass20_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14961 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, T>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies MultiplayerSessionManager::MessageType, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TType>
// Is value type: false
// CS Name: RpcHandler`1<TType>
class CORDL_TYPE RpcHandler_1 : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass10_0_1 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass10_0_1<TType, T>;

  template <typename T, typename T0> using __c__DisplayClass11_0_2 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass11_0_2<TType, T, T0>;

  template <typename T, typename T0, typename T1> using __c__DisplayClass12_0_3 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass12_0_3<TType, T, T0, T1>;

  template <typename T, typename T0, typename T1, typename T2> using __c__DisplayClass13_0_4 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass13_0_4<TType, T, T0, T1, T2>;

  template <typename T, typename T0, typename T1, typename T2, typename T3> using __c__DisplayClass14_0_5 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass14_0_5<TType, T, T0, T1, T2, T3>;

  template <typename T> using __c__DisplayClass15_0_1 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass15_0_1<TType, T>;

  template <typename T, typename T0> using __c__DisplayClass16_0_2 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass16_0_2<TType, T, T0>;

  template <typename T, typename T0, typename T1> using __c__DisplayClass17_0_3 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass17_0_3<TType, T, T0, T1>;

  template <typename T, typename T0, typename T1, typename T2> using __c__DisplayClass18_0_4 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass18_0_4<TType, T, T0, T1, T2>;

  template <typename T, typename T0, typename T1, typename T2, typename T3> using __c__DisplayClass19_0_5 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass19_0_5<TType, T, T0, T1, T2, T3>;

  template <typename T> using __c__DisplayClass20_0_1 = ::GlobalNamespace::RpcHandler_1___c__DisplayClass20_0_1<TType, T>;

  /// @brief Field _messageType, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__messageType, put = __cordl_internal_set__messageType)) ::GlobalNamespace::MultiplayerSessionManager_MessageType _messageType;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

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

  static inline ::GlobalNamespace::RpcHandler_1<TType>* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                 ::GlobalNamespace::MultiplayerSessionManager_MessageType messageType);

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

  constexpr ::GlobalNamespace::MultiplayerSessionManager_MessageType const& __cordl_internal_get__messageType() const;

  constexpr ::GlobalNamespace::MultiplayerSessionManager_MessageType& __cordl_internal_get__messageType();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* const& __cordl_internal_get__rpcSerializer() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__rpcSerializer();

  constexpr void __cordl_internal_set__messageType(::GlobalNamespace::MultiplayerSessionManager_MessageType value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__rpcSerializer(::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::MultiplayerSessionManager_MessageType messageType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RpcHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RpcHandler_1(RpcHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RpcHandler_1(RpcHandler_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14962 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _messageType, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::MultiplayerSessionManager_MessageType ____messageType;

  /// @brief Field _rpcSerializer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<TType, ::GlobalNamespace::IConnectedPlayer*>* ____rpcSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1, "", "RpcHandler`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass10_0_1, "", "RpcHandler`1/<>c__DisplayClass10_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass11_0_2, "", "RpcHandler`1/<>c__DisplayClass11_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass12_0_3, "", "RpcHandler`1/<>c__DisplayClass12_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass13_0_4, "", "RpcHandler`1/<>c__DisplayClass13_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass14_0_5, "", "RpcHandler`1/<>c__DisplayClass14_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass15_0_1, "", "RpcHandler`1/<>c__DisplayClass15_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass16_0_2, "", "RpcHandler`1/<>c__DisplayClass16_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass17_0_3, "", "RpcHandler`1/<>c__DisplayClass17_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass18_0_4, "", "RpcHandler`1/<>c__DisplayClass18_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass19_0_5, "", "RpcHandler`1/<>c__DisplayClass19_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RpcHandler_1___c__DisplayClass20_0_1, "", "RpcHandler`1/<>c__DisplayClass20_0`1");

#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacketProcessor)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor_HashCache_1;
}
namespace LiteNetLib::Utils {
class NetPacketProcessor_SubscribeDelegate;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass25_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass26_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass27_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass28_0_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass29_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass30_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass31_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass32_0_1;
}
namespace LiteNetLib::Utils {
class NetSerializer;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetPacketProcessor;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor_HashCache_1;
}
namespace LiteNetLib::Utils {
class NetPacketProcessor_SubscribeDelegate;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass25_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass26_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass27_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass28_0_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass29_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass30_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class NetPacketProcessor___c__DisplayClass31_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class NetPacketProcessor___c__DisplayClass32_0_1;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor_HashCache_1);
MARK_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1);
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/HashCache`1<T>
class CORDL_TYPE NetPacketProcessor_HashCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Id, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Id, put = setStaticF_Id)) uint64_t Id;

  /// @brief Field Initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_Initialized, put = setStaticF_Initialized)) bool Initialized;

  static inline uint64_t getStaticF_Id();

  static inline bool getStaticF_Initialized();

  static inline void setStaticF_Id(uint64_t value);

  static inline void setStaticF_Initialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor_HashCache_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor_HashCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor_HashCache_1(NetPacketProcessor_HashCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor_HashCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor_HashCache_1(NetPacketProcessor_HashCache_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.MulticastDelegate
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
class CORDL_TYPE NetPacketProcessor_SubscribeDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5698300, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5698328, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x56982ec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  static inline ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x56981a4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor_SubscribeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor_SubscribeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor_SubscribeDelegate(NetPacketProcessor_SubscribeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor_SubscribeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor_SubscribeDelegate(NetPacketProcessor_SubscribeDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19839 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate, 0x80>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass25_0`1<T>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass25_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_1<T>* onReceive;

  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packetConstructor, put = __cordl_internal_set_packetConstructor)) ::System::Func_1<T>* packetConstructor;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>* New_ctor();

  /// @brief Method <Subscribe>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& __cordl_internal_get___4__this() const;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onReceive();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_packetConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_packetConstructor();

  constexpr void __cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr void __cordl_internal_set_onReceive(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_packetConstructor(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass25_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass25_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass25_0_1(NetPacketProcessor___c__DisplayClass25_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass25_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass25_0_1(NetPacketProcessor___c__DisplayClass25_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19840 };

  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* _____4__this;

  /// @brief Field onReceive, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass26_0`2<T,TUserData>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass26_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_2<T, TUserData>* onReceive;

  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packetConstructor, put = __cordl_internal_set_packetConstructor)) ::System::Func_1<T>* packetConstructor;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>* New_ctor();

  /// @brief Method <Subscribe>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& __cordl_internal_get___4__this() const;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __cordl_internal_get___4__this();

  constexpr ::System::Action_2<T, TUserData>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_2<T, TUserData>*& __cordl_internal_get_onReceive();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_packetConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_packetConstructor();

  constexpr void __cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr void __cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value);

  constexpr void __cordl_internal_set_packetConstructor(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass26_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass26_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass26_0_2(NetPacketProcessor___c__DisplayClass26_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass26_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass26_0_2(NetPacketProcessor___c__DisplayClass26_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19841 };

  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* _____4__this;

  /// @brief Field onReceive, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass27_0`1<T>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass27_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_1<T>* onReceive;

  /// @brief Field reference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reference, put = __cordl_internal_set_reference)) T reference;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>* New_ctor();

  /// @brief Method <SubscribeReusable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& __cordl_internal_get___4__this() const;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onReceive();

  constexpr T const& __cordl_internal_get_reference() const;

  constexpr T& __cordl_internal_get_reference();

  constexpr void __cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr void __cordl_internal_set_onReceive(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_reference(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass27_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass27_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass27_0_1(NetPacketProcessor___c__DisplayClass27_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass27_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass27_0_1(NetPacketProcessor___c__DisplayClass27_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19842 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* _____4__this;

  /// @brief Field reference, offset: 0x18, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass28_0`2<T,TUserData>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass28_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_2<T, TUserData>* onReceive;

  /// @brief Field reference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reference, put = __cordl_internal_set_reference)) T reference;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>* New_ctor();

  /// @brief Method <SubscribeReusable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& __cordl_internal_get___4__this() const;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __cordl_internal_get___4__this();

  constexpr ::System::Action_2<T, TUserData>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_2<T, TUserData>*& __cordl_internal_get_onReceive();

  constexpr T const& __cordl_internal_get_reference() const;

  constexpr T& __cordl_internal_get_reference();

  constexpr void __cordl_internal_set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr void __cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value);

  constexpr void __cordl_internal_set_reference(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass28_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass28_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass28_0_2(NetPacketProcessor___c__DisplayClass28_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass28_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass28_0_2(NetPacketProcessor___c__DisplayClass28_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19843 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetPacketProcessor* _____4__this;

  /// @brief Field reference, offset: 0x18, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass29_0`2<T,TUserData>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass29_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_2<T, TUserData>* onReceive;

  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packetConstructor, put = __cordl_internal_set_packetConstructor)) ::System::Func_1<T>* packetConstructor;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>* New_ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::System::Action_2<T, TUserData>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_2<T, TUserData>*& __cordl_internal_get_onReceive();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_packetConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_packetConstructor();

  constexpr void __cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value);

  constexpr void __cordl_internal_set_packetConstructor(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass29_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass29_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass29_0_2(NetPacketProcessor___c__DisplayClass29_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass29_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass29_0_2(NetPacketProcessor___c__DisplayClass29_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19844 };

  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass30_0`1<T>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass30_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_1<T>* onReceive;

  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packetConstructor, put = __cordl_internal_set_packetConstructor)) ::System::Func_1<T>* packetConstructor;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>* New_ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onReceive();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_packetConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_packetConstructor();

  constexpr void __cordl_internal_set_onReceive(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_packetConstructor(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass30_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass30_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass30_0_1(NetPacketProcessor___c__DisplayClass30_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass30_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass30_0_1(NetPacketProcessor___c__DisplayClass30_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19845 };

  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass31_0`2<T,TUserData>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass31_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_2<T, TUserData>* onReceive;

  /// @brief Field reference, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reference, put = __cordl_internal_set_reference)) T reference;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>* New_ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::System::Action_2<T, TUserData>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_2<T, TUserData>*& __cordl_internal_get_onReceive();

  constexpr T const& __cordl_internal_get_reference() const;

  constexpr T& __cordl_internal_get_reference();

  constexpr void __cordl_internal_set_onReceive(::System::Action_2<T, TUserData>* value);

  constexpr void __cordl_internal_set_reference(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass31_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass31_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass31_0_2(NetPacketProcessor___c__DisplayClass31_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass31_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass31_0_2(NetPacketProcessor___c__DisplayClass31_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19846 };

  /// @brief Field reference, offset: 0x10, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor/<>c__DisplayClass32_0`1<T>
class CORDL_TYPE NetPacketProcessor___c__DisplayClass32_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onReceive, put = __cordl_internal_set_onReceive)) ::System::Action_1<T>* onReceive;

  /// @brief Field reference, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reference, put = __cordl_internal_set_reference)) T reference;

  static inline ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>* New_ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  constexpr ::System::Action_1<T>* const& __cordl_internal_get_onReceive() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_onReceive();

  constexpr T const& __cordl_internal_get_reference() const;

  constexpr T& __cordl_internal_get_reference();

  constexpr void __cordl_internal_set_onReceive(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_reference(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor___c__DisplayClass32_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass32_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor___c__DisplayClass32_0_1(NetPacketProcessor___c__DisplayClass32_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor___c__DisplayClass32_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor___c__DisplayClass32_0_1(NetPacketProcessor___c__DisplayClass32_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19847 };

  /// @brief Field reference, offset: 0x10, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Dependencies System.Object
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.NetPacketProcessor
class CORDL_TYPE NetPacketProcessor : public ::System::Object {
public:
  // Declarations
  template <typename T> using HashCache_1 = ::LiteNetLib::Utils::NetPacketProcessor_HashCache_1<T>;

  using SubscribeDelegate = ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate;

  template <typename T> using __c__DisplayClass25_0_1 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass26_0_2 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass27_0_1 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass28_0_2 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2<T, TUserData>;

  template <typename T, typename TUserData> using __c__DisplayClass29_0_2 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass30_0_1 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass31_0_2 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass32_0_1 = ::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1<T>;

  /// @brief Field _callbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__callbacks,
                      put = __cordl_internal_set__callbacks)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* _callbacks;

  /// @brief Field _netDataWriter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__netDataWriter, put = __cordl_internal_set__netDataWriter)) ::LiteNetLib::Utils::NetDataWriter* _netDataWriter;

  /// @brief Field _netSerializer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__netSerializer, put = __cordl_internal_set__netSerializer)) ::LiteNetLib::Utils::NetSerializer* _netSerializer;

  /// @brief Method GetCallbackFromData, addr 0x5697f64, size 0xd8, virtual true, abstract: false, final false
  inline ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate* GetCallbackFromData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline uint64_t GetHash();

  static inline ::LiteNetLib::Utils::NetPacketProcessor* New_ctor();

  static inline ::LiteNetLib::Utils::NetPacketProcessor* New_ctor(int32_t maxStringLength);

  /// @brief Method ReadAllPackets, addr 0x56980a8, size 0x54, virtual false, abstract: false, final false
  inline void ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ReadAllPackets, addr 0x5698104, size 0x58, virtual false, abstract: false, final false
  inline void ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  /// @brief Method ReadPacket, addr 0x56980fc, size 0x8, virtual false, abstract: false, final false
  inline void ReadPacket(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ReadPacket, addr 0x569815c, size 0x48, virtual false, abstract: false, final false
  inline void ReadPacket(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType();

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType(::System::Func_1<T>* constructor);

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writeDelegate, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* readDelegate);

  /// @brief Method RemoveSubscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool RemoveSubscription();

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendNetSerializable(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendNetSerializable(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Subscribe(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void Subscribe(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeNetSerializable(::System::Action_1<T>* onReceive);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeNetSerializable(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeReusable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeReusable(::System::Action_1<T>* onReceive);

  /// @brief Method SubscribeReusable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeReusable(::System::Action_2<T, TUserData>* onReceive);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Write(T packet);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, T packet);

  /// @brief Method WriteHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void WriteHash(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method WriteNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> WriteNetSerializable(T packet);

  /// @brief Method WriteNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void WriteNetSerializable(::LiteNetLib::Utils::NetDataWriter* writer, T packet);

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* const& __cordl_internal_get__callbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>*& __cordl_internal_get__callbacks();

  constexpr ::LiteNetLib::Utils::NetDataWriter* const& __cordl_internal_get__netDataWriter() const;

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __cordl_internal_get__netDataWriter();

  constexpr ::LiteNetLib::Utils::NetSerializer* const& __cordl_internal_get__netSerializer() const;

  constexpr ::LiteNetLib::Utils::NetSerializer*& __cordl_internal_get__netSerializer();

  constexpr void __cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* value);

  constexpr void __cordl_internal_set__netDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  constexpr void __cordl_internal_set__netSerializer(::LiteNetLib::Utils::NetSerializer* value);

  /// @brief Method .ctor, addr 0x5697cb0, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5697db4, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxStringLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor(NetPacketProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor(NetPacketProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19848 };

  /// @brief Field _netSerializer, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetSerializer* ____netSerializer;

  /// @brief Field _callbacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*>* ____callbacks;

  /// @brief Field _netDataWriter, offset: 0x20, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____netDataWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____netSerializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____callbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____netDataWriter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetPacketProcessor, 0x28>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetPacketProcessor);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetPacketProcessor*, "LiteNetLib.Utils", "NetPacketProcessor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor_HashCache_1, "LiteNetLib.Utils", "NetPacketProcessor/HashCache`1");
NEED_NO_BOX(::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetPacketProcessor_SubscribeDelegate*, "LiteNetLib.Utils", "NetPacketProcessor/SubscribeDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass25_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass25_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass26_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass26_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass27_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass27_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass28_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass28_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass29_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass29_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass30_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass30_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass31_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass31_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::NetPacketProcessor___c__DisplayClass32_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass32_0`1");

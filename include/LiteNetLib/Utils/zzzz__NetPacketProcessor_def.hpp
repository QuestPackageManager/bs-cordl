#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetPacketProcessor)
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass30_0_1;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass27_0_1;
}
namespace LiteNetLib::Utils {
class NetSerializer;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor__HashCache_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass26_0_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass28_0_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass29_0_2;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass32_0_1;
}
namespace LiteNetLib::Utils {
class __NetPacketProcessor__SubscribeDelegate;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass31_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass25_0_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetPacketProcessor;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor__HashCache_1;
}
namespace LiteNetLib::Utils {
class __NetPacketProcessor__SubscribeDelegate;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass25_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass26_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass27_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass28_0_2;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass29_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass30_0_1;
}
namespace LiteNetLib::Utils {
template <typename T, typename TUserData> class __NetPacketProcessor____c__DisplayClass31_0_2;
}
namespace LiteNetLib::Utils {
template <typename T> class __NetPacketProcessor____c__DisplayClass32_0_1;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetPacketProcessor);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1);
MARK_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2);
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1);
// Type: ::HashCache`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14196))
// CS Name: ::NetPacketProcessor::HashCache`1<T>*
class CORDL_TYPE __NetPacketProcessor__HashCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_Initialized, put = setStaticF_Initialized)) bool Initialized;

  /// @brief Field Id, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Id, put = setStaticF_Id)) uint64_t Id;

  static inline void setStaticF_Initialized(bool value);

  static inline bool getStaticF_Initialized();

  static inline void setStaticF_Id(uint64_t value);

  static inline uint64_t getStaticF_Id();

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor__HashCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor__HashCache_1(__NetPacketProcessor__HashCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor__HashCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor__HashCache_1(__NetPacketProcessor__HashCache_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor__HashCache_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::SubscribeDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14197))
// CS Name: ::NetPacketProcessor::SubscribeDelegate*
class CORDL_TYPE __NetPacketProcessor__SubscribeDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x220bb4c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x220bc7c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  /// @brief Method BeginInvoke, addr 0x220bc90, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x220bcb8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor__SubscribeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor__SubscribeDelegate(__NetPacketProcessor__SubscribeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor__SubscribeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor__SubscribeDelegate(__NetPacketProcessor__SubscribeDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor__SubscribeDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate, 0x80>, "Size mismatch!");

} // namespace LiteNetLib::Utils
// Type: ::<>c__DisplayClass25_0`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14198))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass25_0`1<T>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass25_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __get_packetConstructor, put = __set_packetConstructor))::System::Func_1<T>* packetConstructor;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_1<T>* onReceive;

  constexpr ::System::Func_1<T>*& __get_packetConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_packetConstructor() const;

  constexpr void __set_packetConstructor(::System::Func_1<T>* value);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& __get___4__this() const;

  constexpr void __set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr ::System::Action_1<T>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_1<T>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Subscribe>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass25_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass25_0_1(__NetPacketProcessor____c__DisplayClass25_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass25_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass25_0_1(__NetPacketProcessor____c__DisplayClass25_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass25_0_1();

public:
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
// Type: ::<>c__DisplayClass26_0`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14199))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass26_0`2<T,TUserData>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass26_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __get_packetConstructor, put = __set_packetConstructor))::System::Func_1<T>* packetConstructor;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_2<T, TUserData>* onReceive;

  constexpr ::System::Func_1<T>*& __get_packetConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_packetConstructor() const;

  constexpr void __set_packetConstructor(::System::Func_1<T>* value);

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& __get___4__this() const;

  constexpr void __set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr ::System::Action_2<T, TUserData>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, TUserData>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_2<T, TUserData>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T, TUserData>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Subscribe>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass26_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass26_0_2(__NetPacketProcessor____c__DisplayClass26_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass26_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass26_0_2(__NetPacketProcessor____c__DisplayClass26_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass26_0_2();

public:
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
// Type: ::<>c__DisplayClass27_0`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14200))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass27_0`1<T>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass27_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field reference, offset 0x18, size 0x8
  __declspec(property(get = __get_reference, put = __set_reference)) T reference;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_1<T>* onReceive;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& __get___4__this() const;

  constexpr void __set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr T& __get_reference();

  constexpr T const& __get_reference() const;

  constexpr void __set_reference(T value);

  constexpr ::System::Action_1<T>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_1<T>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeReusable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass27_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass27_0_1(__NetPacketProcessor____c__DisplayClass27_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass27_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass27_0_1(__NetPacketProcessor____c__DisplayClass27_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass27_0_1();

public:
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
// Type: ::<>c__DisplayClass28_0`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14201))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass28_0`2<T,TUserData>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass28_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::LiteNetLib::Utils::NetPacketProcessor* __4__this;

  /// @brief Field reference, offset 0x18, size 0x8
  __declspec(property(get = __get_reference, put = __set_reference)) T reference;

  /// @brief Field onReceive, offset 0x20, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_2<T, TUserData>* onReceive;

  constexpr ::LiteNetLib::Utils::NetPacketProcessor*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& __get___4__this() const;

  constexpr void __set___4__this(::LiteNetLib::Utils::NetPacketProcessor* value);

  constexpr T& __get_reference();

  constexpr T const& __get_reference() const;

  constexpr void __set_reference(T value);

  constexpr ::System::Action_2<T, TUserData>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, TUserData>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_2<T, TUserData>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T, TUserData>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeReusable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeReusable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass28_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass28_0_2(__NetPacketProcessor____c__DisplayClass28_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass28_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass28_0_2(__NetPacketProcessor____c__DisplayClass28_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass28_0_2();

public:
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
// Type: ::<>c__DisplayClass29_0`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14202))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass29_0`2<T,TUserData>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass29_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __get_packetConstructor, put = __set_packetConstructor))::System::Func_1<T>* packetConstructor;

  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_2<T, TUserData>* onReceive;

  constexpr ::System::Func_1<T>*& __get_packetConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_packetConstructor() const;

  constexpr void __set_packetConstructor(::System::Func_1<T>* value);

  constexpr ::System::Action_2<T, TUserData>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, TUserData>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_2<T, TUserData>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T, TUserData>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass29_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass29_0_2(__NetPacketProcessor____c__DisplayClass29_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass29_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass29_0_2(__NetPacketProcessor____c__DisplayClass29_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass29_0_2();

public:
  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::<>c__DisplayClass30_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14203))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass30_0`1<T>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass30_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field packetConstructor, offset 0x10, size 0x8
  __declspec(property(get = __get_packetConstructor, put = __set_packetConstructor))::System::Func_1<T>* packetConstructor;

  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_1<T>* onReceive;

  constexpr ::System::Func_1<T>*& __get_packetConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get_packetConstructor() const;

  constexpr void __set_packetConstructor(::System::Func_1<T>* value);

  constexpr ::System::Action_1<T>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_1<T>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass30_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass30_0_1(__NetPacketProcessor____c__DisplayClass30_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass30_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass30_0_1(__NetPacketProcessor____c__DisplayClass30_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass30_0_1();

public:
  /// @brief Field packetConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___packetConstructor;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::<>c__DisplayClass31_0`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T, typename TUserData>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14204))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass31_0`2<T,TUserData>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass31_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field reference, offset 0x10, size 0x8
  __declspec(property(get = __get_reference, put = __set_reference)) T reference;

  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_2<T, TUserData>* onReceive;

  constexpr T& __get_reference();

  constexpr T const& __get_reference() const;

  constexpr void __set_reference(T value);

  constexpr ::System::Action_2<T, TUserData>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<T, TUserData>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_2<T, TUserData>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T, TUserData>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass31_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass31_0_2(__NetPacketProcessor____c__DisplayClass31_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass31_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass31_0_2(__NetPacketProcessor____c__DisplayClass31_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass31_0_2();

public:
  /// @brief Field reference, offset: 0x10, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<T, TUserData>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: ::<>c__DisplayClass32_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14205))
// CS Name: ::NetPacketProcessor::<>c__DisplayClass32_0`1<T>*
class CORDL_TYPE __NetPacketProcessor____c__DisplayClass32_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field reference, offset 0x10, size 0x8
  __declspec(property(get = __get_reference, put = __set_reference)) T reference;

  /// @brief Field onReceive, offset 0x18, size 0x8
  __declspec(property(get = __get_onReceive, put = __set_onReceive))::System::Action_1<T>* onReceive;

  constexpr T& __get_reference();

  constexpr T const& __get_reference() const;

  constexpr void __set_reference(T value);

  constexpr ::System::Action_1<T>*& __get_onReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __get_onReceive() const;

  constexpr void __set_onReceive(::System::Action_1<T>* value);

  static inline ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SubscribeNetSerializable>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeNetSerializable_b__0(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass32_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetPacketProcessor____c__DisplayClass32_0_1(__NetPacketProcessor____c__DisplayClass32_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetPacketProcessor____c__DisplayClass32_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetPacketProcessor____c__DisplayClass32_0_1(__NetPacketProcessor____c__DisplayClass32_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetPacketProcessor____c__DisplayClass32_0_1();

public:
  /// @brief Field reference, offset: 0x10, size: 0x8, def value: None
  T ___reference;

  /// @brief Field onReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___onReceive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
// Type: LiteNetLib.Utils::NetPacketProcessor
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14206))
// CS Name: ::LiteNetLib.Utils::NetPacketProcessor*
class CORDL_TYPE NetPacketProcessor : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass32_0_1 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass31_0_2 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass30_0_1 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass29_0_2 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2<T, TUserData>;

  template <typename T, typename TUserData> using __c__DisplayClass28_0_2 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass27_0_1 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1<T>;

  template <typename T, typename TUserData> using __c__DisplayClass26_0_2 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2<T, TUserData>;

  template <typename T> using __c__DisplayClass25_0_1 = ::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1<T>;

  using SubscribeDelegate = ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate;

  template <typename T> using HashCache_1 = ::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1<T>;

  /// @brief Field _netSerializer, offset 0x10, size 0x8
  __declspec(property(get = __get__netSerializer, put = __set__netSerializer))::LiteNetLib::Utils::NetSerializer* _netSerializer;

  /// @brief Field _callbacks, offset 0x18, size 0x8
  __declspec(property(get = __get__callbacks, put = __set__callbacks))::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>* _callbacks;

  /// @brief Field _netDataWriter, offset 0x20, size 0x8
  __declspec(property(get = __get__netDataWriter, put = __set__netDataWriter))::LiteNetLib::Utils::NetDataWriter* _netDataWriter;

  constexpr ::LiteNetLib::Utils::NetSerializer*& __get__netSerializer();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetSerializer*> const& __get__netSerializer() const;

  constexpr void __set__netSerializer(::LiteNetLib::Utils::NetSerializer* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*& __get__callbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>*> const& __get__callbacks() const;

  constexpr void __set__callbacks(::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>* value);

  constexpr ::LiteNetLib::Utils::NetDataWriter*& __get__netDataWriter();

  constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& __get__netDataWriter() const;

  constexpr void __set__netDataWriter(::LiteNetLib::Utils::NetDataWriter* value);

  static inline ::LiteNetLib::Utils::NetPacketProcessor* New_ctor();

  /// @brief Method .ctor, addr 0x220b6c4, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::LiteNetLib::Utils::NetPacketProcessor* New_ctor(int32_t maxStringLength);

  /// @brief Method .ctor, addr 0x220b7ac, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxStringLength);

  /// @brief Method GetHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline uint64_t GetHash();

  /// @brief Method GetCallbackFromData, addr 0x220b928, size 0xd0, virtual true, abstract: false, final false
  inline ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate* GetCallbackFromData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method WriteHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void WriteHash(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType();

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*, T>* writeDelegate, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*, T>* readDelegate);

  /// @brief Method RegisterNestedType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RegisterNestedType(::System::Func_1<T>* constructor);

  /// @brief Method ReadAllPackets, addr 0x220ba60, size 0x4c, virtual false, abstract: false, final false
  inline void ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ReadAllPackets, addr 0x220bab4, size 0x50, virtual false, abstract: false, final false
  inline void ReadAllPackets(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  /// @brief Method ReadPacket, addr 0x220baac, size 0x8, virtual false, abstract: false, final false
  inline void ReadPacket(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendNetSerializable(::LiteNetLib::NetPeer* peer, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Send(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method SendNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SendNetSerializable(::LiteNetLib::NetManager* manager, T packet, ::LiteNetLib::DeliveryMethod options);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Write(::LiteNetLib::Utils::NetDataWriter* writer, T packet);

  /// @brief Method WriteNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void WriteNetSerializable(::LiteNetLib::Utils::NetDataWriter* writer, T packet);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Write(T packet);

  /// @brief Method WriteNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<uint8_t, ::Array<uint8_t>*> WriteNetSerializable(T packet);

  /// @brief Method ReadPacket, addr 0x220bb04, size 0x48, virtual false, abstract: false, final false
  inline void ReadPacket(::LiteNetLib::Utils::NetDataReader* reader, ::System::Object* userData);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Subscribe(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void Subscribe(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeReusable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeReusable(::System::Action_1<T>* onReceive);

  /// @brief Method SubscribeReusable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeReusable(::System::Action_2<T, TUserData>* onReceive);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeNetSerializable(::System::Action_1<T>* onReceive, ::System::Func_1<T>* packetConstructor);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TUserData> inline void SubscribeNetSerializable(::System::Action_2<T, TUserData>* onReceive);

  /// @brief Method SubscribeNetSerializable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SubscribeNetSerializable(::System::Action_1<T>* onReceive);

  /// @brief Method RemoveSubscription, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool RemoveSubscription();

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetPacketProcessor(NetPacketProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetPacketProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetPacketProcessor(NetPacketProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetPacketProcessor();

public:
  /// @brief Field _netSerializer, offset: 0x10, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetSerializer* ____netSerializer;

  /// @brief Field _callbacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*>* ____callbacks;

  /// @brief Field _netDataWriter, offset: 0x20, size: 0x8, def value: None
  ::LiteNetLib::Utils::NetDataWriter* ____netDataWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetPacketProcessor, 0x28>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____netSerializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____callbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetPacketProcessor, ____netDataWriter) == 0x20, "Offset mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetPacketProcessor);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetPacketProcessor*, "LiteNetLib.Utils", "NetPacketProcessor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor__HashCache_1, "LiteNetLib.Utils", "NetPacketProcessor/HashCache`1");
NEED_NO_BOX(::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::__NetPacketProcessor__SubscribeDelegate*, "LiteNetLib.Utils", "NetPacketProcessor/SubscribeDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass25_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass25_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass26_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass26_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass27_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass27_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass28_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass28_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass29_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass29_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass30_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass30_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass31_0_2, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass31_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::__NetPacketProcessor____c__DisplayClass32_0_1, "LiteNetLib.Utils", "NetPacketProcessor/<>c__DisplayClass32_0`1");

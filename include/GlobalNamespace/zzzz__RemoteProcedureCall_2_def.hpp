#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall_2)
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace GlobalNamespace {
template <typename T> class __RemoteProcedureCall__TypeWrapper_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T0, typename T1> class RemoteProcedureCall_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall_2);
// Type: ::RemoteProcedureCall`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T0, typename T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12938))
// CS Name: ::RemoteProcedureCall`2<T0,T1>*
class CORDL_TYPE RemoteProcedureCall_2 : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  /// @brief Field _value0, offset 0x18, size 0x8
  __declspec(property(get = __get__value0, put = __set__value0))::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* _value0;

  /// @brief Field _value1, offset 0x20, size 0x8
  __declspec(property(get = __get__value1, put = __set__value1))::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* _value1;

  __declspec(property(get = get_value0)) T0 value0;

  __declspec(property(get = get_value1)) T1 value1;

  constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*& __get__value0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> const& __get__value0() const;

  constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* value);

  constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*& __get__value1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> const& __get__value1() const;

  constexpr void __set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* value);

  /// @brief Method get_value0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T0 get_value0();

  /// @brief Method get_value1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T1 get_value1();

  /// @brief Method SerializeData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion);

  /// @brief Method DeserializeData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t syncTime, T0 value0, T1 value1);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  static inline ::GlobalNamespace::RemoteProcedureCall_2<T0, T1>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteProcedureCall_2(RemoteProcedureCall_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteProcedureCall_2(RemoteProcedureCall_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteProcedureCall_2();

public:
  /// @brief Field _value0, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* ____value0;

  /// @brief Field _value1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* ____value1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteProcedureCall_2, "", "RemoteProcedureCall`2");

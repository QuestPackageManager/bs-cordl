#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArrayNetSerializable)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ByteArrayNetSerializable);
// Type: ::ByteArrayNetSerializable
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12687))
// CS Name: ::ByteArrayNetSerializable*
class CORDL_TYPE ByteArrayNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _length, offset 0x18, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) int32_t _length;

  /// @brief Field _name, offset 0x20, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  /// @brief Field _allowEmpty, offset 0x28, size 0x1
  __declspec(property(get = __get__allowEmpty, put = __set__allowEmpty)) bool _allowEmpty;

  /// @brief Field _minLength, offset 0x2c, size 0x4
  __declspec(property(get = __get__minLength, put = __set__minLength)) int32_t _minLength;

  /// @brief Field _maxLength, offset 0x30, size 0x4
  __declspec(property(get = __get__maxLength, put = __set__maxLength)) int32_t _maxLength;

  __declspec(property(get = get_length)) int32_t length;

  __declspec(property(get = get_data, put = set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__length();

  constexpr int32_t const& __get__length() const;

  constexpr void __set__length(int32_t value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  constexpr bool& __get__allowEmpty();

  constexpr bool const& __get__allowEmpty() const;

  constexpr void __set__allowEmpty(bool value);

  constexpr int32_t& __get__minLength();

  constexpr int32_t const& __get__minLength() const;

  constexpr void __set__minLength(int32_t value);

  constexpr int32_t& __get__maxLength();

  constexpr int32_t const& __get__maxLength() const;

  constexpr void __set__maxLength(int32_t value);

  /// @brief Method get_length addr 0xe29d6c size 0x8 virtual false final false
  inline int32_t get_length();

  /// @brief Method get_data addr 0xe29d74 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method set_data addr 0xe29e58 size 0x4 virtual false final false
  inline void set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::GlobalNamespace::ByteArrayNetSerializable* New_ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty);

  /// @brief Method .ctor addr 0xe29e84 size 0x48 virtual false final false
  inline void _ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty);

  static inline ::GlobalNamespace::ByteArrayNetSerializable* New_ctor(::StringW name, int32_t size, bool allowEmpty);

  /// @brief Method .ctor addr 0xe29ecc size 0x44 virtual false final false
  inline void _ctor(::StringW name, int32_t size, bool allowEmpty);

  /// @brief Method SetData addr 0xe29e5c size 0x28 virtual false final false
  inline void SetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetData addr 0xe29f10 size 0x220 virtual false final false
  inline void SetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t offset, int32_t length);

  /// @brief Method GetData addr 0xe29d7c size 0xdc virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData(bool emptyAsNull);

  /// @brief Method Serialize addr 0xe2a260 size 0xf0 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe2a350 size 0x244 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Clear addr 0xe2a130 size 0x70 virtual false final false
  inline void Clear();

  /// @brief Method Resize addr 0xe2a1a0 size 0xa4 virtual false final false
  inline void Resize(int32_t length);

  /// @brief Method op_Implicit addr 0xe2a594 size 0x14 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Implicit___ArrayW_uint8_t___Array_uint8_t___(::GlobalNamespace::ByteArrayNetSerializable* byteArrayNetSerializable);

  /// @brief Method CopyTo addr 0xe2a244 size 0x1c virtual false final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination);

  /// @brief Method CopyTo addr 0xe2a5a8 size 0x3c virtual false final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, ByRef<int32_t> length);

  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteArrayNetSerializable(ByteArrayNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteArrayNetSerializable(ByteArrayNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteArrayNetSerializable();

public:
  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field _length, offset: 0x18, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _name, offset: 0x20, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _allowEmpty, offset: 0x28, size: 0x1, def value: None
  bool ____allowEmpty;

  /// @brief Field _minLength, offset: 0x2c, size: 0x4, def value: None
  int32_t ____minLength;

  /// @brief Field _maxLength, offset: 0x30, size: 0x4, def value: None
  int32_t ____maxLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ByteArrayNetSerializable, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ByteArrayNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ByteArrayNetSerializable*, "", "ByteArrayNetSerializable");

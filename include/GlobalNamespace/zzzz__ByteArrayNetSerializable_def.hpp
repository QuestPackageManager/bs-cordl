#pragma once
// IWYU pragma private; include "GlobalNamespace/ByteArrayNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArrayNetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ByteArrayNetSerializable);
// Dependencies LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ByteArrayNetSerializable
class CORDL_TYPE ByteArrayNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _allowEmpty, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__allowEmpty, put = __cordl_internal_set__allowEmpty)) bool _allowEmpty;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _length, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _maxLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength, put = __cordl_internal_set__maxLength)) int32_t _maxLength;

  /// @brief Field _minLength, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minLength, put = __cordl_internal_set__minLength)) int32_t _minLength;

  /// @brief Field _name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  __declspec(property(get = get_data, put = set_data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Clear, addr 0x22baaf4, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyTo, addr 0x22bac08, size 0x1c, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination);

  /// @brief Method CopyTo, addr 0x22baf5c, size 0x3c, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, ::ByRef<int32_t> length);

  /// @brief Method Deserialize, addr 0x22bad0c, size 0x23c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetData, addr 0x22ba738, size 0xec, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetData(bool emptyAsNull);

  static inline ::GlobalNamespace::ByteArrayNetSerializable* New_ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty);

  static inline ::GlobalNamespace::ByteArrayNetSerializable* New_ctor(::StringW name, int32_t size, bool allowEmpty);

  /// @brief Method Resize, addr 0x22bab64, size 0xa4, virtual false, abstract: false, final false
  inline void Resize(int32_t length);

  /// @brief Method Serialize, addr 0x22bac24, size 0xe8, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetData, addr 0x22ba828, size 0x28, virtual false, abstract: false, final false
  inline void SetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetData, addr 0x22ba8dc, size 0x218, virtual false, abstract: false, final false
  inline void SetData(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t offset, int32_t length);

  constexpr bool const& __cordl_internal_get__allowEmpty() const;

  constexpr bool& __cordl_internal_get__allowEmpty();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr int32_t const& __cordl_internal_get__maxLength() const;

  constexpr int32_t& __cordl_internal_get__maxLength();

  constexpr int32_t const& __cordl_internal_get__minLength() const;

  constexpr int32_t& __cordl_internal_get__minLength();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__allowEmpty(bool value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__length(int32_t value);

  constexpr void __cordl_internal_set__maxLength(int32_t value);

  constexpr void __cordl_internal_set__minLength(int32_t value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x22ba850, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty);

  /// @brief Method .ctor, addr 0x22ba898, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, int32_t size, bool allowEmpty);

  /// @brief Method get_data, addr 0x22ba730, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_data();

  /// @brief Method get_length, addr 0x22ba728, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method op_Implicit, addr 0x22baf48, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> op_Implicit___ArrayW_uint8_t___Array_uint8_t___(::GlobalNamespace::ByteArrayNetSerializable* byteArrayNetSerializable);

  /// @brief Method set_data, addr 0x22ba824, size 0x4, virtual false, abstract: false, final false
  inline void set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteArrayNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteArrayNetSerializable(ByteArrayNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteArrayNetSerializable(ByteArrayNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14694 };

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
static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____allowEmpty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____minLength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ByteArrayNetSerializable, ____maxLength) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ByteArrayNetSerializable, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ByteArrayNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ByteArrayNetSerializable*, "", "ByteArrayNetSerializable");

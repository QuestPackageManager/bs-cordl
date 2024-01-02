#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelMask)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelMask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelMask);
// Type: ::BeatmapLevelMask
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14988))
// CS Name: ::BeatmapLevelMask*
class CORDL_TYPE BeatmapLevelMask : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bloomFilter, offset 0x10, size 0x8
  __declspec(property(get = __get__bloomFilter, put = __set__bloomFilter))::GlobalNamespace::BitMaskSparse* _bloomFilter;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>*() noexcept;

  constexpr ::GlobalNamespace::BitMaskSparse*& __get__bloomFilter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BitMaskSparse*> const& __get__bloomFilter() const;

  constexpr void __set__bloomFilter(::GlobalNamespace::BitMaskSparse* value);

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor();

  /// @brief Method .ctor, addr 0x12a0410, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::StringW level);

  /// @brief Method .ctor, addr 0x12a0508, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW level);

  static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::System::Collections::Generic::HashSet_1<::StringW>* levelSet);

  /// @brief Method .ctor, addr 0x12a05a8, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<::StringW>* levelSet);

  /// @brief Method Contains, addr 0x12a0740, size 0x60, virtual false, abstract: false, final false
  inline bool Contains(::StringW state);

  /// @brief Method AddLevel, addr 0x12a07a0, size 0x60, virtual false, abstract: false, final false
  inline void AddLevel(::StringW state);

  /// @brief Method Serialize, addr 0x12a0800, size 0x18, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize, addr 0x12a09ac, size 0x18, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method ToString, addr 0x12a0a58, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode, addr 0x12a0adc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x12a0afc, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapLevelMask* other);

  /// @brief Method Equals, addr 0x12a0b1c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelMask(BeatmapLevelMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelMask(BeatmapLevelMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelMask();

public:
  /// @brief Field _bloomFilter, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BitMaskSparse* ____bloomFilter;

  /// @brief Field kBitCount offset 0xffffffff size 0x4
  static constexpr int32_t kBitCount{ static_cast<int32_t>(0x4000) };

  /// @brief Field kHashCount offset 0xffffffff size 0x4
  static constexpr int32_t kHashCount{ static_cast<int32_t>(0x1) };

  /// @brief Field kHashBits offset 0xffffffff size 0x4
  static constexpr int32_t kHashBits{ static_cast<int32_t>(0xe) };

  /// @brief Field kToStringPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringPrefix{ u"[BeatmapLevelMask " };

  /// @brief Field kToStringSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kToStringSuffix{ u"]" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelMask, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelMask, ____bloomFilter) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelMask*, "", "BeatmapLevelMask");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPartCollection_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class AvatarPartCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::AvatarPartCollection_1);
// Type: ::AvatarPartCollection`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4776))
// CS Name: ::AvatarPartCollection`1<T>*
class CORDL_TYPE AvatarPartCollection_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _partById, offset 0x10, size 0x8
  __declspec(property(get = __get__partById, put = __set__partById))::System::Collections::Generic::Dictionary_2<::StringW, T>* _partById;

  /// @brief Field _partIndexById, offset 0x18, size 0x8
  __declspec(property(get = __get__partIndexById, put = __set__partIndexById))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _partIndexById;

  /// @brief Field _parts, offset 0x20, size 0x8
  __declspec(property(get = __get__parts, put = __set__parts))::ArrayW<T, ::Array<T>*> _parts;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_parts))::ArrayW<T, ::Array<T>*> parts;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>*& __get__partById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, T>*> const& __get__partById() const;

  constexpr void __set__partById(::System::Collections::Generic::Dictionary_2<::StringW, T>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __get__partIndexById();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __get__partIndexById() const;

  constexpr void __set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr ::ArrayW<T, ::Array<T>*>& __get__parts();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__parts() const;

  constexpr void __set__parts(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method get_count addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t get_count();

  /// @brief Method get_parts addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::ArrayW<T, ::Array<T>*> get_parts();

  static inline ::GlobalNamespace::AvatarPartCollection_1<T>* New_ctor(::ArrayW<T, ::Array<T>*> parts);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> parts);

  /// @brief Method GetById addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T GetById(::StringW id);

  /// @brief Method GetRandom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T GetRandom();

  /// @brief Method GetByIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T GetByIndex(int32_t index);

  /// @brief Method GetIndexById addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t GetIndexById(::StringW id);

  /// @brief Method GetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartCollection_1(AvatarPartCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartCollection_1(AvatarPartCollection_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartCollection_1();

public:
  /// @brief Field _partById, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, T>* ____partById;

  /// @brief Field _partIndexById, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____partIndexById;

  /// @brief Field _parts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____parts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::AvatarPartCollection_1, "", "AvatarPartCollection`1");

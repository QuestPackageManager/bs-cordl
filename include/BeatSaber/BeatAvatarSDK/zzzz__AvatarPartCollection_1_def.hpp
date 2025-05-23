#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarPartCollection_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarPartCollection_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
template <typename T> class AvatarPartCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1);
// Dependencies System.Object
namespace BeatSaber::BeatAvatarSDK {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.AvatarPartCollection`1<T>
class CORDL_TYPE AvatarPartCollection_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _partById, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__partById, put = __cordl_internal_set__partById)) ::System::Collections::Generic::Dictionary_2<::StringW, T>* _partById;

  /// @brief Field _partIndexById, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__partIndexById, put = __cordl_internal_set__partIndexById)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _partIndexById;

  /// @brief Field _parts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parts, put = __cordl_internal_set__parts)) ::ArrayW<T, ::Array<T>*> _parts;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_parts)) ::ArrayW<T, ::Array<T>*> parts;

  /// @brief Method GetById, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetById(::StringW id);

  /// @brief Method GetByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetByIndex(int32_t index);

  /// @brief Method GetDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetDefault();

  /// @brief Method GetIndexById, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIndexById(::StringW id);

  /// @brief Method GetRandom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetRandom();

  static inline ::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1<T>* New_ctor(::ArrayW<T, ::Array<T>*> parts);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>* const& __cordl_internal_get__partById() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, T>*& __cordl_internal_get__partById();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get__partIndexById() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__partIndexById();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__parts() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__parts();

  constexpr void __cordl_internal_set__partById(::System::Collections::Generic::Dictionary_2<::StringW, T>* value);

  constexpr void __cordl_internal_set__partIndexById(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__parts(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> parts);

  /// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_parts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> get_parts();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPartCollection_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPartCollection_1(AvatarPartCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPartCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPartCollection_1(AvatarPartCollection_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18159 };

  /// @brief Field _partById, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, T>* ____partById;

  /// @brief Field _partIndexById, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____partIndexById;

  /// @brief Field _parts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____parts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::BeatAvatarSDK
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BeatSaber::BeatAvatarSDK::AvatarPartCollection_1, "BeatSaber.BeatAvatarSDK", "AvatarPartCollection`1");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SonySaveData)
namespace Zenject {
class ITickable;
}
namespace Zenject {
class TickableManager;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class SonySaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonySaveData);
// Type: ::SonySaveData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14389))
// CS Name: ::SonySaveData*
class CORDL_TYPE SonySaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isMarkedForSave, offset 0x10, size 0x1
  __declspec(property(get = __get__isMarkedForSave, put = __set__isMarkedForSave)) bool _isMarkedForSave;

  /// @brief Convert operator to "::GlobalNamespace::ISaveData"
  constexpr operator ::GlobalNamespace::ISaveData*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr bool& __get__isMarkedForSave();

  constexpr bool const& __get__isMarkedForSave() const;

  constexpr void __set__isMarkedForSave(bool value);

  /// @brief Method RegisterForTicking addr 0x20f53dc size 0x20 virtual false final false
  inline void RegisterForTicking(::Zenject::TickableManager* tickableManager);

  /// @brief Method Initialize addr 0x20f53fc size 0x4 virtual false final false
  static inline void Initialize();

  /// @brief Method Save addr 0x20f5400 size 0x28 virtual true final true
  inline void Save(::StringW key, ::StringW value);

  /// @brief Method Load addr 0x20f5428 size 0x80 virtual true final true
  inline bool Load(::StringW key, ByRef<::StringW> value);

  /// @brief Method Save addr 0x20f54a8 size 0x28 virtual true final true
  inline void Save(::StringW key, ::StringW value, ::StringW tempKey, ::StringW backupKey);

  /// @brief Method Load addr 0x20f54d0 size 0x4 virtual true final true
  inline bool Load(::StringW key, ByRef<::StringW> value, ::StringW backupKey);

  /// @brief Method Delete addr 0x20f54d4 size 0x24 virtual true final true
  inline void Delete(::StringW key);

  /// @brief Method HasKey addr 0x20f54f8 size 0xc virtual true final true
  inline bool HasKey(::StringW key);

  /// @brief Method Tick addr 0x20f5504 size 0x18 virtual true final true
  inline void Tick();

  static inline ::GlobalNamespace::SonySaveData* New_ctor();

  /// @brief Method .ctor addr 0x20f551c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonySaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonySaveData(SonySaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonySaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonySaveData(SonySaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonySaveData();

public:
  /// @brief Field _isMarkedForSave, offset: 0x10, size: 0x1, def value: None
  bool ____isMarkedForSave;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonySaveData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonySaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonySaveData*, "", "SonySaveData");

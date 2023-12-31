#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticInfo)
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo);
// Type: UnityEngine.AddressableAssets.Utility::DiagnosticInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14100))
// CS Name: ::UnityEngine.AddressableAssets.Utility::DiagnosticInfo*
class CORDL_TYPE DiagnosticInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisplayName, offset 0x10, size 0x8
  __declspec(property(get = __get_DisplayName, put = __set_DisplayName))::StringW DisplayName;

  /// @brief Field ObjectId, offset 0x18, size 0x4
  __declspec(property(get = __get_ObjectId, put = __set_ObjectId)) int32_t ObjectId;

  /// @brief Field Dependencies, offset 0x20, size 0x8
  __declspec(property(get = __get_Dependencies, put = __set_Dependencies))::ArrayW<int32_t, ::Array<int32_t>*> Dependencies;

  constexpr ::StringW& __get_DisplayName();

  constexpr ::StringW const& __get_DisplayName() const;

  constexpr void __set_DisplayName(::StringW value);

  constexpr int32_t& __get_ObjectId();

  constexpr int32_t const& __get_ObjectId() const;

  constexpr void __set_ObjectId(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_Dependencies();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_Dependencies() const;

  constexpr void __set_Dependencies(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method CreateEvent, addr 0x2a28770, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent CreateEvent(::StringW category, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType eventType,
                                                                                     int32_t frame, int32_t val);

  static inline ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2a287b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticInfo(DiagnosticInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticInfo(DiagnosticInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticInfo();

public:
  /// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DisplayName;

  /// @brief Field ObjectId, offset: 0x18, size: 0x4, def value: None
  int32_t ___ObjectId;

  /// @brief Field Dependencies, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___Dependencies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo, ___DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo, ___ObjectId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo, ___Dependencies) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*, "UnityEngine.AddressableAssets.Utility", "DiagnosticInfo");

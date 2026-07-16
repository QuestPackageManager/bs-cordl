#pragma once
// IWYU pragma private; include "AddressablesInternalBridge/Runtime/Extensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace AddressablesInternalBridge::Runtime {
class CatalogLocationData;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
// Forward declare root types
namespace AddressablesInternalBridge::Runtime {
class Extensions;
}
namespace AddressablesInternalBridge::Runtime {
class Extensions___c;
}
// Write type traits
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions*);
MARK_REF_T(::AddressablesInternalBridge::Runtime::Extensions___c*);
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions*, "AddressablesInternalBridge.Runtime", "Extensions");
DEFINE_IL2CPP_CLASS(::AddressablesInternalBridge::Runtime::Extensions___c*, "AddressablesInternalBridge.Runtime", "Extensions/<>c");
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions/<>c
class CORDL_TYPE Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::AddressablesInternalBridge::Runtime::Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_1,
                      put = setStaticF___9__1_1)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* __9__1_1;

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c* New_ctor();

  /// @brief Method <GetUpdateableCatalogLocationDatas>b__1_0, addr 0x6444e40, size 0x14, virtual false, abstract: false, final false
  inline bool _GetUpdateableCatalogLocationDatas_b__1_0(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo);

  /// @brief Method <GetUpdateableCatalogLocationDatas>b__1_1, addr 0x6445000, size 0xec, virtual false, abstract: false, final false
  inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* _GetUpdateableCatalogLocationDatas_b__1_1(::UnityEngine::AddressableAssets::ResourceLocatorInfo* locatorInfo);

  /// @brief Method .ctor, addr 0x6444e3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::AddressablesInternalBridge::Runtime::Extensions___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* getStaticF___9__1_0();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* getStaticF___9__1_1();

  static inline void setStaticF___9(::AddressablesInternalBridge::Runtime::Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, bool>* value);

  static inline void setStaticF___9__1_1(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocatorInfo*, ::AddressablesInternalBridge::Runtime::CatalogLocationData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c(Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c(Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions___c) == 0x10, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime
// Dependencies System.Object
namespace AddressablesInternalBridge::Runtime {
// Is value type: false
// CS Name: AddressablesInternalBridge.Runtime.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::AddressablesInternalBridge::Runtime::Extensions___c;

  /// @brief Method GetCatalogLocationData, addr 0x64448f0, size 0xb8, virtual false, abstract: false, final false
  static inline ::AddressablesInternalBridge::Runtime::CatalogLocationData* GetCatalogLocationData(::StringW locatorId);

  /// @brief Method GetUpdateableCatalogLocationDatas, addr 0x6444bec, size 0x1fc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::AddressablesInternalBridge::Runtime::CatalogLocationData*>* GetUpdateableCatalogLocationDatas();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AddressablesInternalBridge::Runtime::Extensions) == 0x10, "Size mismatch!");

} // namespace AddressablesInternalBridge::Runtime

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryPoolSettings)
namespace Zenject {
struct PoolExpandMethods;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class MemoryPoolSettings;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MemoryPoolSettings);
// Type: Zenject::MemoryPoolSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10950)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11048))
// CS Name: ::Zenject::MemoryPoolSettings*
class CORDL_TYPE MemoryPoolSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field InitialSize, offset 0x10, size 0x4
  __declspec(property(get = __get_InitialSize, put = __set_InitialSize)) int32_t InitialSize;

  /// @brief Field MaxSize, offset 0x14, size 0x4
  __declspec(property(get = __get_MaxSize, put = __set_MaxSize)) int32_t MaxSize;

  /// @brief Field ExpandMethod, offset 0x18, size 0x4
  __declspec(property(get = __get_ExpandMethod, put = __set_ExpandMethod))::Zenject::PoolExpandMethods ExpandMethod;

  /// @brief Field ShowExpandWarning, offset 0x1c, size 0x1
  __declspec(property(get = __get_ShowExpandWarning, put = __set_ShowExpandWarning)) bool ShowExpandWarning;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Zenject::MemoryPoolSettings* Default;

  constexpr int32_t& __get_InitialSize();

  constexpr int32_t const& __get_InitialSize() const;

  constexpr void __set_InitialSize(int32_t value);

  constexpr int32_t& __get_MaxSize();

  constexpr int32_t const& __get_MaxSize() const;

  constexpr void __set_MaxSize(int32_t value);

  constexpr ::Zenject::PoolExpandMethods& __get_ExpandMethod();

  constexpr ::Zenject::PoolExpandMethods const& __get_ExpandMethod() const;

  constexpr void __set_ExpandMethod(::Zenject::PoolExpandMethods value);

  constexpr bool& __get_ShowExpandWarning();

  constexpr bool const& __get_ShowExpandWarning() const;

  constexpr void __set_ShowExpandWarning(bool value);

  static inline void setStaticF_Default(::Zenject::MemoryPoolSettings* value);

  static inline ::Zenject::MemoryPoolSettings* getStaticF_Default();

  static inline ::Zenject::MemoryPoolSettings* New_ctor();

  /// @brief Method .ctor addr 0x2ee878c size 0x30 virtual false final false
  inline void _ctor();

  static inline ::Zenject::MemoryPoolSettings* New_ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning);

  /// @brief Method .ctor addr 0x2ee87bc size 0x44 virtual false final false
  inline void _ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning);

  /// @brief Method __zenCreate addr 0x2ee887c size 0x74 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee88f0 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoryPoolSettings(MemoryPoolSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoryPoolSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoryPoolSettings(MemoryPoolSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryPoolSettings();

public:
  /// @brief Field InitialSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___InitialSize;

  /// @brief Field MaxSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___MaxSize;

  /// @brief Field ExpandMethod, offset: 0x18, size: 0x4, def value: None
  ::Zenject::PoolExpandMethods ___ExpandMethod;

  /// @brief Field ShowExpandWarning, offset: 0x1c, size: 0x1, def value: None
  bool ___ShowExpandWarning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MemoryPoolSettings, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MemoryPoolSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MemoryPoolSettings*, "Zenject", "MemoryPoolSettings");

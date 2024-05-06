#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Kernel)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
// Forward declare root types
namespace Zenject {
class Kernel;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Kernel);
// Type: Zenject::Kernel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::Kernel*
class CORDL_TYPE Kernel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposablesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__disposablesManager, put = __cordl_internal_set__disposablesManager))::Zenject::DisposableManager* _disposablesManager;

  /// @brief Field _initializableManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__initializableManager, put = __cordl_internal_set__initializableManager))::Zenject::InitializableManager* _initializableManager;

  /// @brief Field _tickableManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tickableManager, put = __cordl_internal_set__tickableManager))::Zenject::TickableManager* _tickableManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IFixedTickable"
  constexpr operator ::Zenject::IFixedTickable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::ILateTickable"
  constexpr operator ::Zenject::ILateTickable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method Dispose, addr 0x3667aac, size 0x18, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method FixedTick, addr 0x3667c1c, size 0x18, virtual true, abstract: false, final false
  inline void FixedTick();

  /// @brief Method Initialize, addr 0x3667a94, size 0x18, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method LateDispose, addr 0x3667ac4, size 0x18, virtual true, abstract: false, final false
  inline void LateDispose();

  /// @brief Method LateTick, addr 0x3667b7c, size 0x18, virtual true, abstract: false, final false
  inline void LateTick();

  static inline ::Zenject::Kernel* New_ctor();

  /// @brief Method Tick, addr 0x3667adc, size 0x18, virtual true, abstract: false, final false
  inline void Tick();

  constexpr ::Zenject::DisposableManager*& __cordl_internal_get__disposablesManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DisposableManager*> const& __cordl_internal_get__disposablesManager() const;

  constexpr ::Zenject::InitializableManager*& __cordl_internal_get__initializableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InitializableManager*> const& __cordl_internal_get__initializableManager() const;

  constexpr ::Zenject::TickableManager*& __cordl_internal_get__tickableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const& __cordl_internal_get__tickableManager() const;

  constexpr void __cordl_internal_set__disposablesManager(::Zenject::DisposableManager* value);

  constexpr void __cordl_internal_set__initializableManager(::Zenject::InitializableManager* value);

  constexpr void __cordl_internal_set__tickableManager(::Zenject::TickableManager* value);

  /// @brief Method __zenCreate, addr 0x3667cc4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x36680bc, size 0x4c8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x3667d20, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x3667e54, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x3667f88, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x3667cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IFixedTickable"
  constexpr ::Zenject::IFixedTickable* i___Zenject__IFixedTickable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ILateDisposable"
  constexpr ::Zenject::ILateDisposable* i___Zenject__ILateDisposable() noexcept;

  /// @brief Convert to "::Zenject::ILateTickable"
  constexpr ::Zenject::ILateTickable* i___Zenject__ILateTickable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Kernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Kernel(Kernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Kernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Kernel(Kernel const&) = delete;

  /// @brief Field _tickableManager, offset: 0x10, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  /// @brief Field _initializableManager, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InitializableManager* ____initializableManager;

  /// @brief Field _disposablesManager, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DisposableManager* ____disposablesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Kernel, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::Kernel, ____tickableManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Kernel, ____initializableManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::Kernel, ____disposablesManager) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Kernel*, "Zenject", "Kernel");

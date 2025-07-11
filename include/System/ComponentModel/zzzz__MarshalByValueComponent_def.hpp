#pragma once
// IWYU pragma private; include "System/ComponentModel/MarshalByValueComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MarshalByValueComponent)
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System::ComponentModel {
class ISite;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class MarshalByValueComponent;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::MarshalByValueComponent);
// Dependencies System.ComponentModel.IComponent, System.IDisposable, System.IServiceProvider, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.MarshalByValueComponent
class CORDL_TYPE MarshalByValueComponent : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Site)) ::System::ComponentModel::ISite* Site;

  /// @brief Field _events, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__events, put = __cordl_internal_set__events)) ::System::ComponentModel::EventHandlerList* _events;

  /// @brief Field _site, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__site, put = __cordl_internal_set__site)) ::System::ComponentModel::ISite* _site;

  /// @brief Field s_eventDisposed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_eventDisposed, put = setStaticF_s_eventDisposed)) ::System::Object* s_eventDisposed;

  /// @brief Convert operator to "::System::ComponentModel::IComponent"
  constexpr operator ::System::ComponentModel::IComponent*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::IServiceProvider"
  constexpr operator ::System::IServiceProvider*() noexcept;

  /// @brief Method Dispose, addr 0x4454e68, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x4454ed4, size 0x288, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x4454dc0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetService, addr 0x445515c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* GetService(::System::Type* service);

  static inline ::System::ComponentModel::MarshalByValueComponent* New_ctor();

  /// @brief Method ToString, addr 0x4455210, size 0x130, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::ComponentModel::EventHandlerList* const& __cordl_internal_get__events() const;

  constexpr ::System::ComponentModel::EventHandlerList*& __cordl_internal_get__events();

  constexpr ::System::ComponentModel::ISite* const& __cordl_internal_get__site() const;

  constexpr ::System::ComponentModel::ISite*& __cordl_internal_get__site();

  constexpr void __cordl_internal_set__events(::System::ComponentModel::EventHandlerList* value);

  constexpr void __cordl_internal_set__site(::System::ComponentModel::ISite* value);

  /// @brief Method .ctor, addr 0x4454db8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_s_eventDisposed();

  /// @brief Method get_Site, addr 0x4454e60, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ISite* get_Site();

  /// @brief Convert to "::System::ComponentModel::IComponent"
  constexpr ::System::ComponentModel::IComponent* i___System__ComponentModel__IComponent() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::IServiceProvider"
  constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

  static inline void setStaticF_s_eventDisposed(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshalByValueComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarshalByValueComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshalByValueComponent(MarshalByValueComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshalByValueComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshalByValueComponent(MarshalByValueComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9406 };

  /// @brief Field _site, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ISite* ____site;

  /// @brief Field _events, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::EventHandlerList* ____events;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::MarshalByValueComponent, ____site) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MarshalByValueComponent, ____events) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::MarshalByValueComponent, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::MarshalByValueComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MarshalByValueComponent*, "System.ComponentModel", "MarshalByValueComponent");
